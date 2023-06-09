/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:55:19 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 23:15:46 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putptr_fd(const void *ptr, int fd)
{
	unsigned long long	quotient;
	unsigned long long	remainder;
	char				hex_format[17];
	int					count;
	int					j;

	j = 0;
	count = 2;
	quotient = (unsigned long long) ptr;
	write(fd, "0x", 2);
	if (ptr == 0)
		count += write(fd, "0", 1);
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hex_format[j++] = remainder + 48;
		else
			hex_format[j++] = remainder + 87;
		quotient = quotient / 16;
	}
	while (j-- > 0)
		count += ft_putchar_fd(hex_format[j], fd);
	return (count);
}
