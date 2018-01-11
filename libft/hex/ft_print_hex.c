/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 08:43:21 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 09:07:10 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_hex(int nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb == 0)
		ft_putchar('0');
	while (nb)
	{
		ft_putchar(str[nb % 16]);
		nb = nb / 16;
	}
}

void	ft_print_hex_caps(int nb)
{
	char *str;

	str = "0123456789ABCDEF";
	if (nb == 0)
		ft_putchar('0');
	while (nb)
	{
		ft_putchar(str[nb % 16]);
		nb = nb / 16;
	}
}
