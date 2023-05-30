/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:18:31 by jlozano-          #+#    #+#             */
/*   Updated: 2023/05/30 20:23:43 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(char const *s, ...);
int	ft_putptr_fd(const void *ptr, int fd);
int	ft_puthex_low_fd(const void *ptr, int fd);
int	ft_puthex_up_fd(const void *ptr, int fd);

#endif