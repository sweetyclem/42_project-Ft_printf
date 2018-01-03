/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 07:00:40 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 07:49:34 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_int(va_list *va)
{
    int char_written;
    long long int nb;

    char_written = 0;
    nb = (long long int)va_arg(*va, int);
    if (nb)
    {
        char_written = ft_longlong_len(nb);
        ft_putnbr(nb);
    }
    return(char_written);
}

int print_u_int(va_list *va)
{
    int char_written;
    unsigned long long int nb;

    char_written = 0;
    nb = (unsigned long long int)va_arg(*va, long long int);
    if (nb)
    {
        char_written = ft_u_int_len(nb);
        ft_putnbr(nb);
    }
    return(char_written);
}
