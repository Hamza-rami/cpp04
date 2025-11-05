#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    std::cout << "Cat created\n";
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed\n"; 
}

Cat::Cat(const Cat& other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		*brain = *other.brain;
	std::cout << "Cat assigned\n";
	return *this;
} 

void Cat::makeSound() const
{
    std::cout << "Mew Mew\n";
}