NAME =ScavTrap
CC = c++
HEAD = ClapTrap.hpp ScavTrap.hpp
CppFlage =  -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp      main.cpp ScavTrap.cpp 
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