/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/08 13:49:19 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	get_width(char *str)
{
	int i;
	int j;
	char *tmp;
	
	i = 0;
	j = 0;
	tmp = ft_strnew(i);
	while (str[i] != '\0')
	{
		if (ft_strchr("123456789", str[i]))
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	return (ft_atoi(tmp));
}