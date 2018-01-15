/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 10:21:17 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_o_unsigned(va_list *va, int char_written, t_format format)
{
	unsigned long long	u_nb;

	u_nb = 0;
	if (format.l == 1 || format.conversion == 'O')
		u_nb = (unsigned long long)va_arg(*va, unsigned long);
	else if (format.l == 2)
		u_nb = (unsigned long long)va_arg(*va, unsigned long long);
	else if (format.h == 1)
		u_nb = (unsigned short)va_arg(*va, unsigned int);
	else if (format.h == 2)
		u_nb = (unsigned char)va_arg(*va, unsigned int);
	else if (format.j == 1)
		u_nb = (uintmax_t)va_arg(*va, uintmax_t);
	else if (format.z == 1)
		u_nb = (size_t)va_arg(*va, size_t);
	char_written += print_u_o_longlong(char_written, format, u_nb);
	return (char_written);
}

int	print_o_longlong(int char_written, t_format format, long long nb)
{
	char_written += ft_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_longlong_base(nb, 8);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_u_o_longlong(int char_written, t_format format, unsigned long long nb)
{
	char_written += ft_u_len_base(nb, 8);
	char_written += print_pound(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_u_longlong_base(nb, 8);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
