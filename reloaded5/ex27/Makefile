# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 12:32:35 by briffard          #+#    #+#              #
#    Updated: 2021/11/04 12:12:10 by briffard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
CC = gcc
FLAGS = -Werror -Wextra -Wall
RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) -o $(NAME) *.o

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re:fclean all
