/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:10:06 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 22:21:16 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint_fd(unsigned int n, int fd)
{
	int					count;

	count = 0;
	if (n > 9)
	{
		count += ft_putuint_fd(n / 10, fd);
	}
	count += ft_putchar_fd(n % 10 + '0', fd);
	return (count);
}
