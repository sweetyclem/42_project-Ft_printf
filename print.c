/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:23:25 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/02 16:21:29 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_numbers(va_list *va)
{
    int char_written;
    long long int nb;

    nb = (int)va_arg(*va, long long int);
    char_written = ft_longlong_len(nb);
    ft_putnbr(nb);
    return(char_written);
}

int print_string(va_list *va)
{
    int char_written;
    char *str;

    str = (char *)va_arg(*va, char *);
    char_written = (int)ft_strlen(str);
    ft_putstr(str);
    return(char_written);
}