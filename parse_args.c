/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:50:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:45:57 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			parse_args(va_list *va, char **str)
{
	int			i;
	t_format	format;

	i = 0;
	if ((*str)[i] == '%')
	{
		i++;
		if ((*str)[i] != '\0')
		{
			*str = handle_format(&(*str)[i], &format);
			return (dispatch_conversion(va, &(*str), format));
		}
	}
	return (0);
}

char		*handle_format(char *str, t_format *format)
{
	int	i;

	i = 0;
	while (ft_strchr("#0-+ hljz.123456789", str[i]) && str[i])
	{
		i++;
	}
	*format = save_format(str, i);
	return (&str[i]);
}

t_format	save_format(char *full_str, int i)
{
	t_format	format;
	char		*str;

	str = ft_strnew(i);
	str = ft_strncpy(str, full_str, i);
	format.min_width = get_width(str);
	format.plus = get_plus_flag(str);
	format.minus = get_minus_flag(str);
	format.zero = get_zero_flag(str, format.minus);
	format.pound = get_pound_flag(str);
	format.space = get_space_flag(str, format.minus, format.plus);
	free(str);
	return (format);
}

int			dispatch_conversion(va_list *va, char **str, t_format format)
{
	int		char_written;
	int		i;

	i = 0;
	char_written = 0;
	format.conversion = (*str)[i];
	if (ft_strchr("dDiuU", format.conversion))
		char_written = print_int(va, format);
	else if (ft_strchr("sS", format.conversion))
		char_written = print_string(va, format);
	else if (ft_strchr("cC", format.conversion))
		char_written = print_char(va, format);
	else if (ft_strchr("oOuUxX", format.conversion))
		char_written = print_int_base(va, format);
	else if (format.conversion == 'p')
		char_written = print_ptr(va, format);
	else
		char_written = print_plain_char(char_written, format);
	*str = &(*str)[i];
	return (char_written);
}
