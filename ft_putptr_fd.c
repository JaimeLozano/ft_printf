/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:55:19 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/17 20:19:27 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

 int	ft_putptr_fd(const void *ptr, int fd)
 {
	char *s;
	
	
	s =ft_itoa((unsigned long long) ptr);
	write(fd, "0x", 2);
	write(fd, &s, 32);
	return(34);
 }