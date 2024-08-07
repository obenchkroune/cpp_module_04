NAME            =   ex00

CXX             =   c++
CXXFLAGS        =   -Wall -Werror -Wextra -std=c++98 -Iinclude

SRC             =   ./src/main.cpp ./src/Animal.cpp ./src/Cat.cpp ./src/Dog.cpp ./src/WrongCat.cpp ./src/WrongAnimal.cpp
OBJ             =   $(SRC:.cpp=.o)

RM              =   rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)