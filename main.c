/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/24 17:13:51 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <locale.h>

void	print_binary(int n)
{
	while (n)
	{
		if (n & 1)
			ft_putnbr(1);
		else
			ft_putnbr(0);
		n >>= 1;
	}
	printf("\n");
}

int		main(void)
{
	setlocale(LC_ALL, "");
	ft_putendl("printf(\"%lc\\n\", 254");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%lc\n", 254));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%lc\n", 254));
	ft_putendl("\n\nprintf(\"%5C\\n\", 350");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%5C\n", 350));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%5C\n", 350));
}
