/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 07:00:40 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 09:33:48 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_numbers(va_list *va, t_format format)
{
	int				char_written;
	char			c;

	char_written = 0;
	c = format.conversion;
	if (c == 'd' || c == 'i' || c == 'D')
		char_written += print_d(va, char_written, format);
	else if (c == 'u' || c == 'U')
		char_written += print_u(va, char_written, format);
	else if (c == 'o'|| c == 'O')
		char_written += print_o(va, char_written, format);
	else if (c == 'x'|| c == 'X')
		char_written += print_x(va, char_written, format);
	return (char_written);
}


int	print_d(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'd' || c == 'i')
	{
		if (!format.l)
			char_written += print_d_int(va, char_written, format);
		else if (format.l == 1)
			char_written += print_d_long(va, char_written, format);
		else if (format.l == 2)
			char_written += print_d_longlong(va, char_written, format);
	}
	else if (c == 'D')
		char_written += print_d_long(va, char_written, format);
	return (char_written);
}


int	print_o(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'o')
	{
		if (!format.l)
			char_written += print_o_int(va, char_written, format);
		else if (format.l == 1)
			char_written += print_o_long(va, char_written, format);
		else if (format.l == 2)
			char_written += print_o_longlong(va, char_written, format);
	}
	else if (c == 'O')
		char_written += print_o_long(va, char_written, format);
	return (char_written);
}

int	print_u(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'u')
	{
		if (!format.l)
			char_written += print_u_int(va, char_written, format);
		else if (format.l == 1)
			char_written += print_u_long(va, char_written, format);
		else if (format.l == 2)
			char_written += print_u_longlong(va, char_written, format);
	}
	else if (c == 'U')
		char_written += print_u_long(va, char_written, format);
	return (char_written);
}

int	print_x(va_list *va, int char_written, t_format format)
{
	char	c;

	c = format.conversion;
	if (c == 'x')
	{
		if (!format.l)
			char_written += print_x_int(va, char_written, format);
		else if (format.l == 1)
			char_written += print_x_long(va, char_written, format);
		else if (format.l == 2)
			char_written += print_x_longlong(va, char_written, format);
	}
	else if (c == 'X')
		char_written += print_x_long(va, char_written, format);
	return (char_written);
}
