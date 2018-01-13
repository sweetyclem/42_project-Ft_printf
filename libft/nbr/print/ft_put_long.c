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

void	ft_put_long(long nbr)
{
	unsigned long nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr != LONG_MIN)
			nbr *= -1;
	}
	nb = nbr;
	if (nb >= 10)
		ft_put_long(nb / 10);
	ft_putchar(nb % 10 + '0');
}
