/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_long_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:29:20 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 07:51:26 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void    ft_put_u_long_base(unsigned long nb, char base)
{
	if (nb < (unsigned long)base)
		ft_putchar('0' + nb);
	else
	{
		ft_put_u_long_base(nb / (unsigned long)base, base);
		ft_putchar('0' + (nb % (unsigned long)base));
	}
}
