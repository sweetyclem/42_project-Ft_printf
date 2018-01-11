/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:43:01 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int		print_string(va_list *va, t_format format)
{
	int		char_written;
	char	*str;

	char_written = 0;
	str = (char *)va_arg(*va, char *);
	if (str)
	{
		char_written += (int)ft_strlen(str);
		char_written += print_width(format, char_written);
		char_written += print_zero_padding(format, char_written);
		ft_putstr(str);
		char_written += print_width_minus(format, char_written);
	}
	else
	{
		ft_putstr("(null)");
		char_written = 6;
		char_written += print_width_minus(format, char_written);
	}
	return (char_written);
}

int		print_char(va_list *va, t_format format)
{
	int char_written;
	int c;

	char_written = 0;
	c = (int)va_arg(*va, int);
	char_written = 1;
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_putchar(c);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int		print_ptr(va_list *va, t_format format)
{
	int		char_written;
	void	*ptr;

	char_written = 0;
	ptr = va_arg(*va, void *);
	char_written = ft_ptr_len_base((size_t)ptr, 16);
	char_written += 2;
	char_written += print_width(format, char_written);
	ft_putstr("0x");
	char_written += print_zero_padding(format, char_written);
	ft_print_ptr((size_t)ptr);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}

int		print_plain_char(int char_written, t_format format)
{
	char_written += 1;
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_putchar(format.conversion);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}