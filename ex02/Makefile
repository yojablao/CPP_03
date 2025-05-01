# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 16:53:39 by yojablao          #+#    #+#              #
#    Updated: 2025/05/01 22:04:20 by yojablao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =FragTrap
CC = c++
HEAD = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CppFlage =  -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp      main.cpp ScavTrap.cpp FragTrap.cpp
OBJ =$(SRC:%.cpp=%.o)

all:$(NAME)
%.o:%.cpp $(HEAD)
	$(CC) $(CppFlage) -c $< -o $@

$(NAME) : $(OBJ) 
	$(CC) $(CppFlage) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
re : fclean all