# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 22:52:22 by jlozano-          #+#    #+#              #
#    Updated: 2023/05/30 22:21:50 by jlozano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SRC			= ft_printf.c \
			ft_putptr_fd.c \
			ft_puthex_low_fd.c \
			ft_puthex_up_fd.c \
			ft_putuint_fd.c \

OBJS		= $(SRC:c=o)
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar -rc
RM			= rm -f

# libft
LIBFT_NAME	= libft.a
LIBFT_DIR	= libft
LIBFT		= $(addprefix $(LIBFT_DIR)/, $(LIBFT_NAME))


all: $(NAME)

$(LIBFT):	$(LIBFT_DIR)
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			$(AR) $(NAME) $(OBJS)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re