#include "printf.h"
#include <stdio.h>

int main(void)
{
	ft_putendl("mienne : ");
	ft_printf("%d", 42);
	ft_putendl("\nvraie printf : ");
	printf("%d", 42);

	ft_putendl("\nmienne : ");
	ft_printf("%%");
	ft_putendl("\nvraie printf : ");
	printf("%%");
}