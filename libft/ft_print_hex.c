/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 08:43:21 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 08:49:27 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(int nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb == 0)
		write (1, "0", 1);
	while (nb)
	{
		write(1, &str[nb % 16], 1);
		nb = nb / 16;
	}
}

void	ft_print_hex_caps(int nb)
{
	char *str;

	str = "0123456789ABCDEF";
	if (nb == 0)
		write (1, "0", 1);
	while (nb)
	{
		write(1, &str[nb % 16], 1);
		nb = nb / 16;
	}
}