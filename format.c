/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/08 14:34:58 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	get_width(char *str)
{
	int i;
	int j;
	char *tmp;
	int width;
	
	i = 0;
	j = 0;
	width = 0;
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
	width = ft_atoi(tmp);
	free(tmp);
	return (width);
}

int	get_option_zero(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '0')
			return (1);
		i++;
	}
	return (0);
}