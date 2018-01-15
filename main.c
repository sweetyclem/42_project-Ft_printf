/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 09:05:07 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%zd\", LLONG_MAX))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%zd\n", LLONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%zd\n", LLONG_MAX));
	ft_putendl("\n\nprintf(\"%zu, %zu\", 0, ULLONG_MAX)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%zu, %zu\n", 0, ULLONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%zu, %zu\n", 0, ULLONG_MAX));
}
