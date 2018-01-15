/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 11:41:48 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%-15p\", 0))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%-15p}\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%-15p}\n", 0));
	ft_putendl("\n\nprintf(\"%-15.4d\", 42");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%-15.4d\n", 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%-15.4d\n", 42));
}
