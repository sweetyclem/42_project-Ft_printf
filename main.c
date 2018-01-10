/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:11:23 by cpirlot           #+#    #+#             */
/*   Updated: 2018/01/10 08:09:28 by cpirlot          ###   ########.fr       */
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

	ft_putendl("\n\nprintf(\"% u|%+u\", 42, 42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("% u|%+u\n", 42, 42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("% u|%+u\n", 42, 42));

	ft_putendl("\n\nprintf(\"%hhu / %hhu\", SHRT_MAX - 42,  SHRT_MAX - 4200)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%hhu / %hhu\n", SHRT_MAX - 42, SHRT_MAX - 4200));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%hhu / %hhu\n", SHRT_MAX - 42, SHRT_MAX - 4200));
}
