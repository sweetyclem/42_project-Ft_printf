/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:19:13 by cpirlot           #+#    #+#             */
/*   Updated: 2017/12/20 15:49:50 by cpirlot          ###   ########.fr       */
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
	char	*start;

	char_written = 0;
	str = (char *)format;
	start = (char *)format;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			// Write everything that was before the %
			ft_putnstr(start, str - start);
			char_written += parse_args(va, &str);
			start = str;
		}
		else if (*str != '\0')
		{
			char_written++;
			str++;
		}
	}
	ft_putnstr(start, str - start);
	return (char_written);
}