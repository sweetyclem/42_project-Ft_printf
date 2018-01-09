/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:24:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 14:09:18 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

# define MIN_INT -2147483648
# define MAX_INT 2147483647
# define MIN_UINT -4294967295
# define MAX_UINT 4294967295
# define MIN_LONG -9223372036854775807
# define MAX_LONG 9223372036854775807

typedef struct	s_format
{
	char	conversion;
	int		min_width;
	int		zero;
	int		plus;
	int		minus;
	int		pound;
	int		space;
}				t_format;

int				ft_printf(const char *format, ...);
int				parse_format(va_list *va, char *format);

/*
** Args
*/
int				parse_args(va_list *va, char **str);
int				dispatch_conversion(va_list *va, char **str, t_format format);
char			*handle_format(char *str, t_format *format);
t_format		save_format(char *str, int i);

/*
** Format
*/
int				get_width(char *str);
int				get_zero_flag(char *str, int minus);
int				get_plus_flag(char *str);
int				get_minus_flag(char *str);
int				get_pound_flag(char *str);
int				get_space_flag(char *str, int minus, int plus);

/*
** Printing
*/
int				print_int(va_list *va, t_format format);
int				print_int_base(va_list *va, t_format format);
int				print_u_int(va_list *va);
int				print_o_int(va_list *va, t_format format);
int				print_x_int(va_list *va, t_format format);
int				print_char(va_list *va);
int				print_string(va_list *va);
int				print_ptr(va_list *va);
size_t			ptr_len_base(size_t ptr, unsigned int base);
int				print_space(t_format format, int nb);
int				print_pound(t_format format, int nb);
#endif
