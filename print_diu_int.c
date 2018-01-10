/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:16:39 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 13:53:06 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_cap_d_int(va_list *va, int char_written, t_format format)
{
	long	nb;

	nb = (long)va_arg(*va, long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_longlen(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_putlong(nb);
	return (char_written);
}

int	print_d_int(va_list *va, int char_written, t_format format)
{
	long long int	nb;

	nb = (long long int)va_arg(*va, int);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_longlong_len(nb);
	char_written += print_width(format, char_written);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = ft_abs(nb);
	}
	char_written += print_zero_padding(format, char_written);
	ft_putnbr(nb);
	return (char_written);
}

int	print_u_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(*va, long long int);
	char_written += ft_u_int_len(nb);
	char_written += print_plus(format, nb);
	char_written += print_width(format, char_written);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_ulonglong(nb);
	return (char_written);
}

int	print_cap_u_int(va_list *va, int char_written, t_format format)
{
	unsigned long long int	nb;

	nb = (long)va_arg(*va, long);
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_ulong_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_putulong(nb);
	return (char_written);
}
