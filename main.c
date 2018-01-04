#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putendl("printf(\"% \")");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("% "));
	ft_putchar('\n');
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("% "));
	ft_putchar('\n');

	ft_putendl("\n\nprintf(\"% v\")");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("% v"));
	ft_putchar('\n');
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("% v"));
	ft_putchar('\n');

	ft_putendl("\n\nprintf(\"%5%\"))");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%5%\n"));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%5%\n"));
	
	ft_putendl("\n\nprintf(\"%x\", -42)");
	ft_putendl("mienne : ");
	ft_putnbrendl(ft_printf("%x\n", -42));
	ft_putendl("vraie printf : ");
	ft_putnbrendl(printf("%x\n", -42));

	// ft_putendl("\n\nprintf(\"%D\", LONG_MAX)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%D\n", LONG_MAX));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%D\n", (int)LONG_MAX));

	// ft_putendl("\n\nprintf(\"%D\", LONG_MIN)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%D\n", LONG_MIN));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%D\n", LONG_MIN));

	// ft_putendl("\n\nprintf(\"%O\", LONG_MAX)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%O\n", LONG_MAX));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%O\n", LONG_MAX));

	// ft_putendl("\n\nprintf(\"%u\", UINT_MAX)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%u\n", UINT_MAX));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%u\n", UINT_MAX));
	
	// ft_putendl("\n\nprintf(\"%U\", ULONG_MAX / 2)");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%U\n", ULONG_MAX / 2));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%U\n", ULONG_MAX / 2));
	
	// ft_putendl("\n\nprintf(\"%U\", ULONG_MAX))");
	// ft_putendl("mienne : ");
	// ft_putnbrendl(ft_printf("%U\n", ULONG_MAX));
	// ft_putendl("vraie printf : ");
	// ft_putnbrendl(printf("%U\n", ULONG_MAX));
}