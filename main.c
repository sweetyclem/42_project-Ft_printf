/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 11:09:44 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"{%010d}\", 42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%010d}\n", 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%010d}\n", 42));

	ft_putendl("\n\nprintf(\"{%010d}\", -42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%010d}\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%010d}\n", -42));
}
