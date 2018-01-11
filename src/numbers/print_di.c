/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:16:39 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 15:38:21 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_d(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'd' || c == 'i')
		char_written += print_d_int(va, char_written, format);
	if (c == 'D')
		char_written += print_d_long(va, char_written, format);
	return (char_written);
}

int	print_d_int(va_list *va, int char_written, t_format format)
{
	int	nb;

	nb = (int)va_arg(*va, int);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_long_len(nb);
	char_written += print_width(format, char_written);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = ft_abs(nb);
	}
	char_written += print_zero_padding(format, char_written);
	ft_putnbr(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_d_long(va_list *va, int char_written, t_format format)
{
	long	nb;

	nb = (long)va_arg(*va, long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_long_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_long(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_d_longlong(va_list *va, int char_written, t_format format)
{
	long long	nb;

	nb = (long long)va_arg(*va, long long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_longlong_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_longlong(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
