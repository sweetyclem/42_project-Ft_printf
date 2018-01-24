/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 06:55:37 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/24 08:46:44 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		print_unicode(va_list *va, t_format format)
{
	int		char_written;
	wchar_t	c;
	wchar_t	*s;

	char_written = 0;
	if (format.conversion == 'C' || format.conversion == 'c')
	{
		c = (wchar_t)va_arg(*va, wint_t);
		char_written += print_unicode_char(char_written, format, c);
	}
	else if (format.conversion == 'S' || format.conversion == 's')
	{
		s = (wchar_t *)va_arg(*va, wchar_t *);
		char_written += print_unicode_string(char_written, format, s);
	}
	return (char_written);
}

int		print_unicode_char(int char_written, t_format format, wchar_t c)
{
	int		prec;

	prec = format.precision;
	if (ft_wcharlen(c) == 0)
		char_written += 0;
	if (c == 0 || (c >= 55296 && c < 57344))
		return (1);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	char_written += ft_putwchar(c);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int		print_unicode_string(int char_written, t_format format, wchar_t *s)
{
	int		prec;
	int		len;

	prec = format.precision;
	len = ft_wstrlen(s);
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (prec == 0 && len > 0)
		char_written += (int)len;
	else if (prec > 0 && prec < (int)len && len > 0)
		char_written += prec;
	else if (prec > 0 && len > 0)
		char_written += len;
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_putstr("len : ");
	ft_putnbrendl(ft_wstrnlen(s, prec));
	if (prec > 0)
		ft_putnwstr(s, ft_wstrnlen(s, prec));
	else if (prec != -1)
		ft_putwstr(s);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
