/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlong_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 09:07:44 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_longlong_len(long long int nbr)
{
	size_t		len;

	len = 1;
	while (nbr > 9 || nbr < -9)
	{
		nbr /= 10;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}
