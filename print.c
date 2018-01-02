/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/02 16:42:43 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_numbers(va_list *va)
{
    int char_written;
    long long int nb;

    char_written = 0;
    nb = (int)va_arg(*va, long long int);
    if (nb)
    {
        char_written = ft_longlong_len(nb);
        ft_putnbr(nb);
    }
    return(char_written);
}

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
    if (c)
    {
        char_written = 1;
        ft_putchar(c);
    }
    return(char_written);
}