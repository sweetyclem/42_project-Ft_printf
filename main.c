/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 14:17:11 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%####0000 33..1d\", 256)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%####0000 33..1d\n", 256));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%####0000 33..1d\n", 256));
	ft_putendl("\n\nprintf(\"%d\", 0)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%d\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%d\n", 0));
	ft_putendl("\n\nprintf(\"%.4u\", 42");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%.4u\n", 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%.4u\n", 42));
}
