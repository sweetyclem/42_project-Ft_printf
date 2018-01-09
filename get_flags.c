/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:31:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 07:12:56 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	get_zero_flag(char *str, int minus)
{
	int i;
	char *tmp;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '0' && !minus)
		{
			tmp = ft_strnew(i);
			tmp = ft_strncpy(tmp, str, i);
			if (ft_strchr(tmp, '.'))
				return (0);
			while (*tmp)
			{
				if (ft_strchr("123456789", *tmp))
				{
					free(tmp);
					return (0);
				}
				*tmp += 1;
			}
			free(tmp);
			return (1);
		}
		i++;
	}
	return (0);
}

int	get_plus_flag(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

int	get_minus_flag(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	get_pound_flag(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			return (1);
		i++;
	}
	return (0);
}

int	get_space_flag(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}