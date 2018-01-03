/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 16:08:41 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_string(va_list *va)
{
    int char_written;
    char *str;

    char_written = 0;
    str = (char *)va_arg(*va, char *);
    if (str)
    {
        char_written = (int)ft_strlen(str);
        ft_putstr(str);
    }
    else
    {
        ft_putstr("(null)");
        char_written = 6;
    }
    return(char_written);
}

int print_char(va_list *va)
{
    int char_written;
    char c;

    char_written = 0;
    c = (char)va_arg(*va, int);
    char_written = 1;
    ft_putchar(c);
    return(char_written);
}

int print_ptr(va_list *va)
{
    int char_written;
    void    *ptr;

    char_written = 0;
    
    ptr = va_arg(*va, void *);
    char_written = ptr_len_base((size_t)ptr, 16);
    ft_putstr("0x");
    ft_print_ptr((size_t)ptr);
    return(char_written + 2);
}

size_t		ptr_len_base(size_t ptr, unsigned int base)
{
	size_t		len;

	len = 1;
	while (ptr >= base)
	{
		ptr /= base;
		len++;
	}
	return (len);
}