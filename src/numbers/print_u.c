/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:22:28 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 15:53:19 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_u_longlong(int char_written, t_format format, unsigned long long nb)
{
	int	precision_to_write;

	precision_to_write = 0;
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	if (!(format.precision == -1 && nb == 0))
		char_written += ft_u_longlong_len(nb);
	if (format.precision > 0)
		precision_to_write = format.precision - ft_u_longlong_len(nb);
	char_written += print_width(format, char_written +
	(precision_to_write > 0 ? precision_to_write : 0));
	char_written += print_zero_padding(format, char_written);
	char_written += print_precision(format, nb, ft_u_longlong_len(nb));
	if (!(format.precision == -1 && nb == 0))
		ft_put_u_longlong_base(nb, 10);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
