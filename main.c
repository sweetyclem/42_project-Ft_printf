/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 13:41:59 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%d\", INT_MIN)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%d\n", INT_MIN));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%d\n", INT_MIN));

	ft_putendl("\n\nprintf(\"%5+d\", -42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%5+d\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%5+d\n", -42));

	ft_putendl("\n\nprintf(\"{%010x}\", -42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%010x}\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%010x}\n", -42));
}
