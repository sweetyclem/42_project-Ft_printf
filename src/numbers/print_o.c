/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:55:50 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_o(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'o')
		char_written += print_o_int(va, char_written, format);
	if (c == 'O')
		char_written += print_o_long(va, char_written, format);
	return (char_written);
}

int	print_o_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(*va, long long int);
	char_written += ft_u_int_len_base(nb, 8);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	char_written += print_pound(format, nb);
	ft_put_longlong_base(nb, 8);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_o_long(va_list *va, int char_written, t_format format)
{
	unsigned long	nb;

	nb = (unsigned long)va_arg(*va, long);
	char_written += ft_u_int_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_long_base(nb, 8);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_o_longlong(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long long)va_arg(*va, long long);
	char_written += ft_u_int_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_longlong_base(nb, 8);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
