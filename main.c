/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 14:51:09 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%#6o\", 2500)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%#6o\n", 2500));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%#6o\n", 2500));

	ft_putendl("\n\nprintf(\"%-10.\")");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%-10.5o\n", 2500));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%-10.5o\n", 2500));
	
	ft_putendl("\n\nprintf(\"%-010s is a string\", \"this\")");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%-010s is a string\n", "this"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%-010s is a string\n", "this"));
}
