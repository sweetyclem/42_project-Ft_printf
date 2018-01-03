/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 07:00:40 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 07:12:13 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_int(va_list *va)
{
    int char_written;
    long long int nb;

    char_written = 0;
    nb = (int)va_arg(*va, int);
    if (nb)
    {
        char_written = ft_longlong_len(nb);
        ft_putnbr(nb);
    }
    return(char_written);
}

int print_long_long(va_list *va)
{
    int char_written;
    long long int nb;

    char_written = 0;
    nb = (long long int)va_arg(*va, long long int);
    if (nb)
    {
        char_written = ft_longlong_len(nb);
        ft_putnbr(nb);
    }
    return(char_written);
}
