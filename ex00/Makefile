NAME            =   ex00

CXX             =   c++
CXXFLAGS        =   -Wall -Werror -Wextra -std=c++98 -Iinclude -MMD -MP

BUILD_DIR       =   build
SRC_DIR         =   src

SRC             =   src/main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongCat.cpp src/WrongAnimal.cpp
OBJ             =   $(SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEP             =   $(OBJ:.o=.d)

RM              =   rm -rf


all: $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

-include $(DEP)

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)
