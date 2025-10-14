#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog created\n";
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
    std::cout << "Haw Haw\n";
}


Dog::Dog(const Dog& other) : Animal(other)
{
    this->type = other.type;
    std::cout << "Dog copied\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog assigned\n";
	return *this;
}
