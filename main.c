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
	ft_putendl("printf(\"%X\", -42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%X\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%X\n", -42));

	ft_putendl("\n\nprintf(\"%X\", 4294967296)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%X\n", 4294967296));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%X\n", 4294967296));

	ft_putendl("\n\nprintf(\"%lx\", 4294967296)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lx\n", 4294967296));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lx\n", 4294967296));
	
	ft_putendl("\n\nprintf(\"%jx\", 4294967296)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%jx\n", 4294967296));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%jx\n", 4294967296));
}
