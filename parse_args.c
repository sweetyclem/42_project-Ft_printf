/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/02 16:52:31 by cpirlot          ###   ########.fr       */
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

	char_written = 0;
	if ((*str)[i] == 'd' || (*str)[i] == 'i')
	{
		char_written = print_numbers(va);
	}
	else if ((*str)[i] == 's')
	{
		char_written = print_string(va);
	}
	else if ((*str)[i] == 'c')
	{
		char_written = print_char(va);
	}
	else if ((*str)[i] == '%')
	{
		ft_putchar('%');
	}
	*str = &(*str)[i];
	return (char_written);
}