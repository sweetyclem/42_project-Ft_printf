/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/17 11:18:54 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("---MOULITEST---");
	ft_putendl("printf(\"{%03.2d}\", 0)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%03.2d\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%03.2d\n", 0));
	ft_putendl("\n\nprintf(\"%03.2d\", 1)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%03.2d\n", 1));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%03.2d\n", 1));
	// ft_putendl("\n\nprintf(\"{%05.s}\", 0)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("{%05.s}\n", 0));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("{%05.s}\n", 0));
	// ft_putendl("\n\nprintf(\"{%05.%}\", 0)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("{%05.%}\n", 0));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("{%05.%}\n", 0));
	// ft_putendl("\n\nprintf(\"{%05.Z}\", 0)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("{%05.Z}\n", 0));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("{%05.Z}\n", 0));
	// ft_putendl("\n\nprintf(\"%#.3o\", 0)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%#.3o\n", 1));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%#.3o\n", 1));
	// ft_putendl("\n\n---UNDEFINED BEHAVIOR---");
	// ft_putendl("printf(\"%zhd\", 4294967296)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%zhd\n", 4294967296));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%zhd\n", 4294967296));
	// ft_putendl("printf(\"%jhd\", 9223372036854775807)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%###-#0000 33...12..#0+0d", 256));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%###-#0000 33...12..#0+0d", 256));
}
