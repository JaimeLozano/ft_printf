#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *string="hola";

	ft_printf("hola\n");
	ft_printf("%c %d\n", *string, 50);
	ft_printf("%s\n", string);
	ft_printf("%p\n", string);
	printf("%p\n", string);
	printf("%d", ft_printf("%d\n", 50));
	printf("%d", printf("%d\n", 50));
	return (0);
}
