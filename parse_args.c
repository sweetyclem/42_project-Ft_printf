/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 09:34:14 by cpirlot          ###   ########.fr       */
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
			return call_appropriate_function(va, &(*str), i);
		}
	}
	return (0);
}

int	call_appropriate_function(va_list *va, char **str, int i)
{
	int char_written;
	char c;

	char_written = 0;
	c = (*str)[i];
	if (c == 'd' || c == 'i' || c == 'D')
		char_written = print_int(va);
	else if (c == 's' || c == 'S')
		char_written = print_string(va);
	else if (c == 'c' || c == 'C')
		char_written = print_char(va);
	else if (ft_strchr("oOuUxX", c))
		char_written = print_int_base(va, c);
	else if (c == 'p')
		char_written = print_ptr(va);
	else if (!ft_strchr("hljz ", c))
	{
		ft_putchar(c);
		char_written = 1;
	}
	*str = &(*str)[i];
	return (char_written);
}