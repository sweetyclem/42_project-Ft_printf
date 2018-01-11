/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:55:50 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_x_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(*va, unsigned long long int);
	char_written += print_pound(format, nb);
	char_written += ft_hex_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_print_u_l_hex(nb, "0123456789abcdef");
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_x_long(va_list *va, int char_written, t_format format)
{
	unsigned long	nb;

	nb = (unsigned long)va_arg(*va, unsigned long);
	char_written += print_pound(format, nb);
	char_written += ft_hex_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_print_u_l_hex(nb, "0123456789ABCDEF");
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_x_longlong(va_list *va, int char_written, t_format format)
{
	unsigned long long	nb;

	nb = (unsigned long long)va_arg(*va, unsigned long long);
	char_written += print_pound(format, nb);
	char_written += ft_hex_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_print_u_l_hex(nb, "0123456789ABCDEF");
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
