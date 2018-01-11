/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_len_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 08:17:12 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 09:05:37 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t		ft_uint_len_base(unsigned long long int nbr, unsigned int base)
{
	size_t		len;

	len = 1;
	while (nbr >= base)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
