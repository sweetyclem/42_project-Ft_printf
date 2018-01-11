/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:08:22 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 17:10:29 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			ft_putlong_base(long nb, char base)
{
	if (base > 1 && base < 10)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putlong_base(-(nb / base), base);
			ft_putchar('0' - (nb % base));
		}
		else if (nb < base)
			ft_putchar('0' + nb);
		else
		{
			ft_putlong_base(nb / base, base);
			ft_putchar('0' + nb % base);
		}
	}
	else if (base == 1)
		ft_putnchar('1', nb);
}
