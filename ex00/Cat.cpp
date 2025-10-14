#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat created\n";
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
    std::cout << "Mew Mew\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->type = other.type;
    std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat assigned\n";
	return *this;
}