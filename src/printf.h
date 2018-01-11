/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:24:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 15:57:23 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"
# include <limits.h>

typedef struct	s_format
{
	char	conversion;
	int		min_width;
	int		zero;
	int		plus;
	int		minus;
	int		pound;
	int		space;
	int		l;
	int		h;
	int		j;
	int		z;
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
** Format saving
*/
int				get_width(char *str);
int				get_zero_flag(char *str, int minus);
int				get_plus_flag(char *str);
int				get_minus_flag(char *str);
int				get_pound_flag(char *str);
int				get_space_flag(char *str, int minus, int plus);
int				get_length(char *str, char c);

/*
** Printing for flags
*/
int				print_space(t_format format, int nb);
int				print_pound(t_format format, int nb);
int				print_plus(t_format format, int nb);
int				print_width(t_format format, int char_written);
int				print_width_minus(t_format format, int char_written);
int				print_zero_padding(t_format format, int char_written);

/*
** Printing for conversions d i D u U
*/
int				print_int(va_list *va, t_format format);
int				print_int_base(va_list *va, t_format format);
int				print_cap_d_int(va_list *va, int char_written, t_format format);
int				print_d_int(va_list *va, int char_written, t_format format);
int				print_u_int(va_list *va, int char_written, t_format format);
int				print_cap_u_int(va_list *va, int char_written, t_format format);

/*
** Printing for conversions d i D u U
*/
int				print_o_int(va_list *va, int char_written, t_format format);
int				print_cap_o_int(va_list *va, int char_written, t_format format);
int				print_x_int(va_list *va, int char_written, t_format format);
int				print_cap_x_int(va_list *va, int char_written, t_format format);

/*
** Printing for strings and chars
*/
int				print_char(va_list *va, t_format format);
int				print_string(va_list *va, t_format format);
int				print_ptr(va_list *va, t_format format);
int				print_plain_char(int char_written, t_format format);
#endif