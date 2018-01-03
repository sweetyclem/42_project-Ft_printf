/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:24:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/03 09:56:31 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

int ft_printf(const char *format, ...);
int	parse_format(va_list *va, char *format);

//Args
int	parse_args(va_list *va, char **str);
int	call_appropriate_function(va_list *va, char **str, int i);

// Printing
int print_int(va_list *va);
int print_int_base(va_list *va, char c);
int print_u_int(va_list *va);
int print_o_int(va_list *va);
int print_x_int(va_list *va, char c);

int print_char(va_list *va);
int print_string(va_list *va);
int print_ptr(va_list *va);
size_t	ptr_len_base(size_t ptr, unsigned int base);