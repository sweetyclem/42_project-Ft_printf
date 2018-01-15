/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 10:14:38 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"{%o}\", -42))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%o}\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%o}\n", -42));
	ft_putendl("\n\nprintf(\"%lo\", (long)INT_MIN - 1)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lo\n", (long)INT_MIN - 1));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lo\n", (long)INT_MIN - 1));
}
