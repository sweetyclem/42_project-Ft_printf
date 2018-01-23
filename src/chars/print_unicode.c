/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 06:55:37 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/23 11:40:57 by cpirlot          ###   ########.fr       */
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
	char_written += ft_putwchar(c);
	return (char_written);
}
