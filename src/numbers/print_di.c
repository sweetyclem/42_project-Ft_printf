/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:16:39 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 08:31:46 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	print_d_longlong(int char_written, t_format format, long long nb)
{
	char_written += print_plus(format, nb);
	char_written += print_space(format, nb);
	char_written += ft_longlong_len(nb);
	char_written += print_width(format, char_written);
	char_written += print_zero_padding(format, char_written);
	ft_put_longlong_base(nb, 10);
	char_written += print_width_minus(format, char_written);
	return (char_written);
}
