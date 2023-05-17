#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *string="hola";

	ft_printf("hola\n");
	ft_printf("%c\n", *string);
	ft_printf("%s\n", string);
	ft_printf("%p\n", string);
	printf("%p\n", string);
	return (0);
}
