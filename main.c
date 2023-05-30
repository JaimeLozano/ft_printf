#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *string="hola";

	ft_printf("%p\n", string);
	printf("%p\n", string);
	ft_printf("%X\n",11);
	printf("%X\n",10);
	return (0);
}
