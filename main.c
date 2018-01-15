/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/15 08:38:50 by cpirlot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putendl("printf(\"%ho, %ho\", 0, USHRT_MAX))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%ho, %ho\n", 0, USHRT_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%ho, %ho\n", 0, USHRT_MAX));
	ft_putendl("\n\nprintf(\"%jx\", 4294967296)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%jx\n", 4294967296));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%jx\n", 4294967296));
}
