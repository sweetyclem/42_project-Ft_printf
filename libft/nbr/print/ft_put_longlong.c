/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_longlong.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 09:06:44 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void			ft_put_longlong(long long int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-(nb / 10));
		ft_putchar('0' - (nb % 10));
	}
	else if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}
