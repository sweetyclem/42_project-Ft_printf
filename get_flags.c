/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:31:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/08 15:46:39 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	get_zero_flag(char *str, int minus)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '0' && !minus)
			return (1);
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