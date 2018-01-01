/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/01 13:43:13 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	parse_args(va_list *va, char **str, int i)
{
	size_t char_written;

	char_written = 0;
	if ((*str)[i] == '%')
	{
		i++;
		if ((*str)[i] != '\0')
		{
			(*str) = get_args(va, (*str), i);
		}
	}
	return (char_written);
}

char	*get_args(va_list *va, char *str, int i)
{
	if (str[i] == 'd' || str[i] == 'i')
	{
		print_numbers(va);
	}
	return (&str[i]);
}