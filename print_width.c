/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 08:25:32 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 09:11:59 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_width(t_format format, int char_written)
{
	int	spaces_written;
	int	i;

	spaces_written = 0;
	i = 0;
	if (format.min_width > char_written)
	{
		spaces_written = format.min_width - char_written;
		i = spaces_written;
		while (i > 0)
		{
			ft_putchar(' ');
			i--;
		}
	}
	return (spaces_written);
}
