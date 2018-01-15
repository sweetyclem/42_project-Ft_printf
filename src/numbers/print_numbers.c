/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 07:00:40 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 07:53:46 by cpirlot          ###   ########.fr       */
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
	char		c;
	long long	nb;

	c = format.conversion;
	if (c == 'd' || c == 'i' || c == 'D')
	{
		if (format.l == 1 || c == 'D')
			nb = (long long)va_arg(*va, long);
		else if (format.l == 2)
			nb = (long long)va_arg(*va, long long);
		else if (format.h == 2)
			nb = (char)va_arg(*va, int);
		else
			nb = (long long)va_arg(*va, int);
		char_written += print_d_longlong(char_written, format, nb);
	}
	return (char_written);
}


int	print_o(va_list *va, int char_written, t_format format)
{
	char				c;
	long long			nb;
	unsigned long long	u_nb;

	c = format.conversion;
	if (format.l || c == 'O')
	{
		if (format.l == 1 || c == 'O')
		{
			u_nb = (unsigned long long)va_arg(*va, unsigned long);
			char_written += print_u_o_longlong(char_written, format, u_nb);
		}
		else if (format.l == 2)
		{
			u_nb = (unsigned long long)va_arg(*va, unsigned long long);
			char_written += print_u_o_longlong(char_written, format, u_nb);
		}
	}
	else
	{			
		nb = (long long)va_arg(*va, int);
		char_written += print_o_longlong(char_written, format, nb);
	}
	return (char_written);
}

int	print_u(va_list *va, int char_written, t_format format)
{
	char		c;
	unsigned long long	nb;

	c = format.conversion;
	if (c == 'u' || c == 'U')
	{
		if (format.l == 1 || c == 'U')
			nb = (unsigned long long)va_arg(*va, unsigned long);
		else if (format.l == 2)
			nb = (unsigned long long)va_arg(*va, unsigned long long);
		else
			nb = (unsigned long long)va_arg(*va, unsigned int);
		char_written += print_u_longlong(char_written, format, nb);
	}
	return (char_written);
}

int	print_x(va_list *va, int char_written, t_format format)
{
	char		c;
	unsigned long long	nb;

	c = format.conversion;

	if (format.l == 1)
		nb = (unsigned long long)va_arg(*va, unsigned long);
	else if (format.l == 2)
		nb = (unsigned long long)va_arg(*va, unsigned long long);
	else
		nb = (unsigned long long)va_arg(*va, unsigned int);
	char_written += print_x_longlong(char_written, format, nb);

	return (char_written);
}
