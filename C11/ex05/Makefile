# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboutay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/02 21:14:00 by saboutay          #+#    #+#              #
#    Updated: 2026/08/03 12:35:16 by saboutay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRC	= $(wildcard srcs/*c)
OBJ	= $(SRC:.c=.o)
CC	= cc
FLAGS	= -Wall -Wextra -Werror
INCD	= -I includes
RM	= rm -f

all: $(NAME)
$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.c
	@$(CC) $(FLAGS) $(INCD) -c $< -o $@
clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re

