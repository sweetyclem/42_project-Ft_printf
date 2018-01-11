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
