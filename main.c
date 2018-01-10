/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 09:30:44 by cpirlot          ###   ########.fr       */
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
	ft_putnbrendl(printf("{% S}\n", L"(null)"));

	ft_putendl("\n\nprintf(\"{%3c}\", 0)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%3c}\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%3c}\n", 0));

	ft_putendl("\n\nprintf(\"{%5p}\", 0)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%5p}\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%5p}\n", 0));

	ft_putendl("\n\nprintf(\"{%10R}\")");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{%10R}\n"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{%10R}\n"));
}
