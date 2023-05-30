/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:57:45 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 23:13:43 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low_fd(unsigned int quotient, int fd)
{
	unsigned int		remainder;
	char				hex_format[17];
	int					count;
	int					j;

	j = 0;
	count = 0;
	if (quotient == 0)
	{
		write(fd, "0", 1);
		count++;
	}
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
