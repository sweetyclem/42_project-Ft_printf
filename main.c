#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putendl("mienne : ");
	ft_printf("before %d after", 42);
	ft_putendl("\nvraie printf : ");
	printf("before %d after", 42);

	ft_putendl("\n\nmienne : ");
	ft_printf("%d", 42);
	ft_putendl("\nvraie printf : ");
	printf("%d", 42);

	ft_putendl("\n\nmienne : ");
	ft_printf("%d", -42);
	ft_putendl("\nvraie printf : ");
	printf("%d", -42);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("%d%d%d%d%d", 1, -2, 3, -4, 5);
	ft_putendl("\nvraie printf : ");
	printf("%d%d%d%d%d", 1, -2, 3, -4, 5);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("a%db%dc%dd", 1, -2, 3);
	ft_putendl("\nvraie printf : ");
	printf("a%db%dc%dd", 1, -2, 3);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("%d", INT_MAX);
	ft_putendl("\nvraie printf : ");
	printf("%d", INT_MAX);
	
	ft_putendl("\n\nmienne : ");
	ft_printf("%d", INT_MIN);
	ft_putendl("\nvraie printf : ");
	printf("%d", INT_MIN);

	// ft_putendl("\nmienne : ");
	// ft_printf("%%");
	// ft_putendl("\nvraie printf : ");
	// printf("%%");
}