/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:10:42 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 13:25:13 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_space(t_format format, int nb)
{
	if (format.space && !ft_strchr("di", format.conversion))
	{
		ft_putchar(' ');
		return (1);
	}
	else if (format.space && ft_strchr("di", format.conversion))
	{
		if (nb >= 0)
		{
			ft_putchar(' ');
			return (1);
		}
	}
	return (0);
}
