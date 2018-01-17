/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/17 18:12:31 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("---UNDEFINED BEHAVIOR---");
	ft_putendl("printf(\"{%###-#0000 33...12..#0+0d}\", 256)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%###-#0000 33...12..#0+0d}\n", 256));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%###-#0000 33...12..#0+0d}\n", 256));
	ft_putendl("printf(\"{%.12.#0d}\", 256)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%.12.#0d}\n", 256));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%.12.#0d}\n", 256));
}
