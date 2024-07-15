# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 15:21:39 by kaan              #+#    #+#              #
#    Updated: 2024/07/15 14:36:51 by kaan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp\

OBJ	= $(SRC:.cpp=.o)

RM		= rm -f
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -O0 $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re