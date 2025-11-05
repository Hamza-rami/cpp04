CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Dog.hpp Cat.hpp Animal.hpp Brain.hpp
NAME = animal

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all