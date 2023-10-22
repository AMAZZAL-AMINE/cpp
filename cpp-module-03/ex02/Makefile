# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 18:30:09 by mamazzal          #+#    #+#              #
#    Updated: 2023/10/22 16:32:19 by mamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=frag

SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ=$(SRC:.cpp=.o)

FLAGS=-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all