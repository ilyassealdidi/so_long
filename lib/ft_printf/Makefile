# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 08:50:47 by ialdidi           #+#    #+#              #
#    Updated: 2024/03/17 14:17:06 by ialdidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_printf.c \
			sources/ft_putchar.c \
			sources/ft_putstr.c \
			sources/ft_putnbr_base.c \
			sources/ft_print_address.c

OBJS	= $(SRCS:.c=.o)

AR 		= ar rc

LIBRARY	= includes/libftprintf.h

CFLAGS	= -Wall -Wextra -Werror

NAME 	= libftprintf.a

all		:	$(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o		: %.c $(LIBRARY)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean	:
	@$(RM) $(OBJS)
	
fclean:			clean
	@$(RM) $(NAME) $(OBJS)
				
re:				fclean all
	
	