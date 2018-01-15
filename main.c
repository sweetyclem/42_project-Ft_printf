/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 08:03:44 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%hhu\", UCHAR_MAX + 42))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%hhu\n", UCHAR_MAX + 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%hhu\n", UCHAR_MAX + 42));

	ft_putendl("\n\nprintf(\"%hho\", UCHAR_MAX + 42))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%hho\n", UCHAR_MAX + 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%hho\n", UCHAR_MAX + 42));

	ft_putendl("\n\nprintf(\"%hhx\", UCHAR_MAX + 42))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%hhx\n", UCHAR_MAX + 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%hhx\n", UCHAR_MAX + 42));
	
	// ft_putendl("\n\nprintf(\"%jx\", 4294967296)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%jx\n", 4294967296));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%jx\n", 4294967296));
}
