/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:40:24 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 08:34:47 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	get_width(char *str)
{
	int		i;
	int		j;
	char	*tmp;
	int		width;

	i = 0;
	j = 0;
	width = 0;
	tmp = ft_strnew(i);
	while (str[i] != '\0')
	{
		if (ft_strchr("0123456789", str[i]) && !ft_strchr(str, '.'))
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
