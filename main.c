#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("{% %}\n"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("{% %}\n"));

	// ft_putendl("\n\nmienne : ");
	// ft_putnbrendl(ft_printf("%S\n", L"Á±≥"));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%S\n", L"Á±≥"));

	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%D\n", LONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%D\n", (int)LONG_MAX));

	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%D\n", LONG_MIN));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%D\n", LONG_MIN));

	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%O\n", LONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%O\n", LONG_MAX));

	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%u\n", UINT_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%u\n", UINT_MAX));
	
	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%U\n", ULONG_MAX / 2));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%U\n", ULONG_MAX / 2));
	
	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%U\n", ULONG_MAX));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%U\n", ULONG_MAX));
	
	ft_putendl("\n\nmienne : ");
	ft_putnbrendl(ft_printf("%c\n", 0));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%c\n", 0));
}