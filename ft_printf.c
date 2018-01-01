/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:19:13 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/01 11:31:26 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *format, ...)
{
	size_t	char_written;
	va_list va;

	char_written = 0;
	if (format)
	{
		va_start(va, format);
		char_written = parse_format(&va, format);
		va_end(va);
	}
	return (char_written);
}

size_t	parse_format(va_list *va, const char *format)
{
	size_t	char_written;
	char	*str;

	char_written = 0;
	str = (char *)format;
	while (*str != '\0')
	{
		if (*str == '%')
			char_written += parse_args(va, &str);
		else
		{
			ft_putchar(*str);
			char_written++;	
		}
		if (*str != '\0')
			str++;
	}
	return (char_written);
}