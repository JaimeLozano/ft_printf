/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:51:50 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 23:26:40 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (format == 'p')
		return (ft_putptr_fd(va_arg(args, char *), 1));
	else if (format == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (format == 'u')
		return (ft_putuint_fd(va_arg(args, int), 1));
	else if (format == 'x')
		return (ft_puthex_low_fd(va_arg(args, int), 1));
	else if (format == 'X')
		return (ft_puthex_up_fd(va_arg(args, int), 1));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		print_count;

	va_start(args, str);
	print_count = 0;
	while (*str != 0)
	{
		if (*str == '%')
		{
			if (*(++str) != '%')
				print_count += ft_format(args, *str);
			else
				print_count += ft_putchar_fd(*str, 1);
		}
		else
			print_count += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(args);
	return (print_count);
}
