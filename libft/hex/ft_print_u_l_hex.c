/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_l_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 16:53:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 09:41:24 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <limits.h>

void	ft_print_u_l_hex(unsigned long long int nb, const char *str)
{
	if (nb > UINT_MAX)
		ft_putchar('0');
	else if (nb < 16)
		ft_putchar(str[nb]);
	else
	{
		ft_print_u_l_hex(nb / 16, str);
		ft_putchar(str[nb % 16]);
	}
}
