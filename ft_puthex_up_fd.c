/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 23:03:54 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 20:28:24 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_up_fd(const void *ptr, int fd)
{
	unsigned long long	quotient;
	unsigned long long	remainder;
	char				hex_format[17];
	int					count;
	int					j;

	j = 0;
	count = 2;
	quotient = (unsigned long long) ptr;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hex_format[j++] = remainder + 48;
		else
			hex_format[j++] = remainder + 55;
		quotient = quotient / 16;
	}
	while (j-- > 0)
		count += ft_putchar_fd(hex_format[j], fd);
	return (count);
}
