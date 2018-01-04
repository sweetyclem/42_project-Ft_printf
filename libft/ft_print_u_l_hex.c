/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_l_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:53:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/04 08:57:37 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int			ft_print_u_l_hex(unsigned long long int nb, const char *str)
{
	int char_written;

	char_written = 0;
	if (nb > UINT_MAX)
	{
		ft_putchar('0');
		char_written = 1;
	}
	else if (nb < 16)
	{
		ft_putchar(str[nb]);
		char_written = 1;
	}
	else
	{
		ft_print_u_l_hex(nb / 16, str);
		ft_putchar(str[nb % 16]);
		char_written = ft_uint_len_base(nb, 16);
	}
	return (char_written);
}
