CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp AMateria.hpp
NAME = Interface

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