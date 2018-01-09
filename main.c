/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/09 14:10:53 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"{% S}\", L\"(null)\"");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{% S}\n", L"(null)"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{% S", L"(null)"));

	ft_putendl("\n\nprintf(\"%5%\"))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%5%\n"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%5%\n"));

	ft_putendl("\n\nprintf(\"%05c\"))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%05c\n", 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%05c\n", 42));

	ft_putendl("\n\nprintf(\"%#o\", 0))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%#o\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%#o\n", 0));

	ft_putendl("\n\nprintf(\"@moulitest: %#.o %#.0o\", 0, 0))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("@moulitest: %#.o %#.0o\n", 0, 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("@moulitest: %#.o %#.0o\n", 0, 0));
}
