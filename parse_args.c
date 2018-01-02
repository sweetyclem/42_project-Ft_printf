/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/02 17:12:12 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	parse_args(va_list *va, char **str)
{
	int i;

	i = 0;
	if ((*str)[i] == '%')
	{
		i++;
		if ((*str)[i] != '\0')
		{
			return get_args(va, &(*str), i);
		}
	}
	return (0);
}

int	get_args(va_list *va, char **str, int i)
{
	int char_written;
	char c;

	char_written = 0;
	c = (*str)[i];
	if (c == 'd' || c == 'i')
	{
		char_written = print_numbers(va);
	}
	else if (c == 's')
	{
		char_written = print_string(va);
	}
	else if (c == 'c' || c == 'C')
	{
		char_written = print_char(va);
	}
	else if (c == '%')
	{
		ft_putchar('%');
		char_written = 1;
	}
	*str = &(*str)[i];
	return (char_written);
}