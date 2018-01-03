/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_l_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:53:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 17:19:38 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void		put_nbr_long_long_u(unsigned long long int nb,
	const char *str)
{
	if (nb < 16)
		ft_putchar(str[nb]);
	else
	{
		put_nbr_long_long_u(nb / 16, str);
		ft_putchar(str[nb % 16]);
	}
}

void			ft_print_u_l_hex(long long int nbr, const char *str)
{
	if (str)
	{
		if (nbr < 0)
			ft_putchar('-');
		if (nbr == LLONG_MIN)
		{
			put_nbr_long_long_u(LLONG_MIN / 16, str);
			ft_putchar('0' - LLONG_MIN % 10);
		}
		else
		{
			if (nbr < 0)
				nbr = -nbr;
			put_nbr_long_long_u((unsigned long long int)nbr, str);
		}
	}
}