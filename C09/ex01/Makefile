# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboutay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/01 16:12:39 by saboutay          #+#    #+#              #
#    Updated: 2026/08/01 17:41:29 by saboutay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  libft.a
SRCS	= srcs/ft_putchar.c\
	  srcs/ft_swap.c \
	  srcs/ft_putstr.c\
	  srcs/ft_strlen.c\
	  srcs/ft_strcmp.c
CC	= cc
AR	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
INCDS	= -I includes
OBJS	= $(SRCS:.c=.o)
RM	= rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $(INCDS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
