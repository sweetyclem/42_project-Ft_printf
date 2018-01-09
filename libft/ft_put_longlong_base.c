/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_longlong_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 08:05:01 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 09:06:52 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_put_longlong_base(long long int nb, char base)
{
	if (base > 1 && base < 10)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_put_nbr_base(-(nb / base), base);
			ft_putchar('0' - (nb % base));
		}
		else if (nb < base)
			ft_putchar('0' + nb);
		else
		{
			ft_put_nbr_base(nb / base, base);
			ft_putchar('0' + nb % base);
		}
	}
	else if (base == 1)
		ft_putnchar('1', nb);
}
