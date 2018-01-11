/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:00:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 17:29:04 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void			ft_put_long(long nb)
{
	if (nb < 0 && nb != LONG_MIN)
	{
		ft_putchar('-');
		ft_putchar('0' - (nb % 10));
	}
	else if (nb < 0 && nb == LONG_MIN)
	{
		ft_putchar('-');
		ft_put_long(-(nb / 10));
		ft_putchar('0' - (nb % 10));
	}
	else if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_put_long(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}
