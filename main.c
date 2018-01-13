/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 15:50:58 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%lX\", ULONG_MAX)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lX\n", ULONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lX\n", ULONG_MAX));

	ft_putendl("\n\nprintf(\"%lo\", ULONG_MAX)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lo\n", ULONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lo\n", ULONG_MAX));
	
	ft_putendl("\n\nprintf(\"%lx\", ULONG_MAX)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lx\n", ULONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lx\n", ULONG_MAX));
}
