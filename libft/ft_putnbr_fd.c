/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:22:04 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/23 00:14:12 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;
	int				count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		count++;
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		count += ft_putnbr_fd(number / 10, fd);
		number %= 10;
	}
	count += ft_putchar_fd(number + '0', fd);
	return (count);
}
