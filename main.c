#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putendl("mienne : ");
	ft_printf("%%\n");
	ft_putendl("vraie printf : ");
	printf("%%\n");

	ft_putendl("\n\nmienne : ");
	ft_printf("111%s333\n", "222");
	ft_putendl("vraie printf : ");
	printf("111%s333\n", "222");

	ft_putendl("\n\nmienne : ");
	ft_printf("%s333\n", "222");
	ft_putendl("vraie printf : ");
	printf("%s333\n", "222");
	
	ft_putendl("\n\nmienne : ");
	ft_printf("111%s\n", "222");
	ft_putendl("vraie printf : ");
	printf("111%s\n", "222");
	
	ft_putendl("\n\nmienne : ");
	ft_printf("{%s}\n", NULL);
	//ft_putnbrendl(printf("{%s}\n", NULL));
	ft_putendl("vraie printf : ");
	printf("{%s}\n", NULL);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("{%s}\n", "");
	ft_putendl("vraie printf : ");
	printf("{%s}\n", "");

	ft_putendl("\n\nmienne : ");
	ft_printf("a%ub%uc%ud\n", 0, 55555, 100000);
	ft_putendl("vraie printf : ");
	printf("a%ub%uc%ud\n", 0, 55555, 100000);
}