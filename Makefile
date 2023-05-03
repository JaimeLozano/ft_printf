# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 22:52:22 by jlozano-          #+#    #+#              #
#    Updated: 2023/05/03 22:54:56 by jlozano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c

SRCS_B		= ft_printf.h

NAME		= libftprintf.a

OBJS		= $(SRCS:c=o)

CC			= gcc

AR			= ar r

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS_B)
		$(AR) $(NAME) $(OBJS_B)

.PHONY: clean all fclean re bonus