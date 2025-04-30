NAME =ClapTrap
CC = c++
HEAD = ClapTrap.hpp
CppFlage =  -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp      main.cpp
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