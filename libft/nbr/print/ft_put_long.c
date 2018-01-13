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
	int	overflow;

	overflow = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == LONG_MIN)
		{
			nbr = LONG_MAX;
			overflow = 1;
		}
		else
			nbr *= -1;
	}
	if (nbr >= 10)
		ft_put_long(nbr / 10);
	ft_putchar(nbr % 10 + '0' + overflow);
}