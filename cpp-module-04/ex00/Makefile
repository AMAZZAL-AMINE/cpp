# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 18:30:09 by mamazzal          #+#    #+#              #
#    Updated: 2023/10/02 15:59:56 by mamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=frag

SRC= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp
OBJ=$(SRC:.cpp=.o)


CFLAGS=-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

all: $(NAME)


$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all