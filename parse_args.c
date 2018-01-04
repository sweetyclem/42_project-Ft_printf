/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/04 11:01:15 by cpirlot          ###   ########.fr       */
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
			*str = skip_format(&(*str)[i]);
			return dispatch_conversion(va, &(*str));
		}
	}
	return (0);
}

char	*skip_format(char *str)
{
	int i;

	i = 0;

	while (ft_strchr("#0-+ hljz.123456789", str[i]) && str[i])
	{
		i++;
	}
	return (&str[i]);
}

int	dispatch_conversion(va_list *va, char **str)
{
	int char_written;
	char c;
	int i;

	i = 0;
	char_written = 0;
	c = (*str)[i];
	 if (ft_strchr("dDiuU", c))
		char_written = print_int(va, c);
	else if (c == 's' || c == 'S')
		char_written = print_string(va);
	else if (c == 'c' || c == 'C')
		char_written = print_char(va);
	else if (ft_strchr("oOuUxX", c))
		char_written = print_int_base(va, c);
	else if (c == 'p')
		char_written = print_ptr(va);
	else
	{
		ft_putchar(c);
		char_written = 1;
	}
	*str = &(*str)[i];
	return (char_written);
}