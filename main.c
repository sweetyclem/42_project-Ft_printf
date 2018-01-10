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

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%ld\", (long)INT_MAX + 1))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%ld\n", (long)INT_MAX + 1));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%ld\n", (long)INT_MAX + 1));

	ft_putendl("\n\nprintf(\"%ld\", LONG_MAX)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%ld\n", LONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%ld\n", LONG_MAX));
	
	ft_putendl("\n\nprintf(\"%lld\", -2147483648)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lld\n", -2147483648));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lld\n", -2147483648));
}
