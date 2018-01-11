/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:55:50 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_u(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'u')
		char_written += print_u_int(va, char_written, format);
	if (c == 'U')
		char_written += print_u_long(va, char_written, format);
	return (char_written);
}

int	print_u_int(va_list *va, int char_written, t_format format)
{
	unsigned int	nb;

	nb = (unsigned int)va_arg(*va, unsigned int);
	char_written += ft_u_int_len(nb);
	char_written += print_plus(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_u_int(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_u_long(va_list *va, int char_written, t_format format)
{
	unsigned long	nb;

	nb = (unsigned long)va_arg(*va, unsigned long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_u_long_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_u_long(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int	print_u_longlong(va_list *va, int char_written, t_format format)
{
	unsigned long long	nb;

	nb = (unsigned long long)va_arg(*va, unsigned long long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_u_longlong_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_u_longlong(nb);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
