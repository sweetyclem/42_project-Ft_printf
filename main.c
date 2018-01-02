#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putendl("mienne : ");
	ft_printf("%s\n", "abc");
	ft_putendl("vraie printf : ");
	printf("%s\n", "abc");

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
	ft_printf("{%s\n}", NULL);
	ft_putendl("vraie printf : ");
	printf("{%s\n}", NULL);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("{%s\n}", "");
	ft_putendl("vraie printf : ");
	printf("{%s\n}", "");
}