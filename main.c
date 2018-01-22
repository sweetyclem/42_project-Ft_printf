/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/22 06:57:51 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("---UNDEFINED BEHAVIOR---");
	ft_putendl("printf(\"%C\", L'猫')");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%C\n", L'猫'));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%C\n", L'猫'));
	ft_putendl("printf(\"%C\", L'δ')");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%C\n", L'δ'));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%C\n", L'δ'));
}
