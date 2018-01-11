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

int	print_int(va_list *va, t_format format)
{
	int				char_written;
	char			c;

	char_written = 0;
	c = format.conversion;
	if (c == 'd' || c == 'i')
		char_written += print_d_int(va, char_written, format);
	else if (c == 'D')
		char_written += print_cap_d_int(va, char_written, format);
	else if (c == 'u')
		char_written += print_u_int(va, char_written, format);
	else if (c == 'U')
		char_written += print_cap_u_int(va, char_written, format);
	return (char_written);
}

int	print_int_base(va_list *va, t_format format)
{
	int		char_written;
	char	c;

	char_written = 0;
	c = format.conversion;
	if (c == 'o')
		char_written += print_o_int(va, char_written, format);
	else if (c == 'O')
		char_written += print_cap_o_int(va, char_written, format);
	else if (c == 'x')
		char_written += print_x_int(va, char_written, format);
	else if (c == 'X')
		char_written += print_cap_x_int(va, char_written, format);
	return (char_written);
}
