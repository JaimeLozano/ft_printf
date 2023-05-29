#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *string="hola";

	ft_printf("hola\n");
	ft_printf("%c %d\n", *string, -50);
	ft_printf("%s\n", string);
	ft_printf("%p\n", string);
	printf("%p\n", string);
	printf("%d\n", ft_printf("%d\n", -50));
	printf("%d\n", printf("%d\n", -50));
	ft_printf("%x\n",10);
	printf("%x\n",10);
	return (0);
}
