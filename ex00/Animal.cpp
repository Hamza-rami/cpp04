#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created\n";
}

Animal::~Animal()
{
	std::cout << "Animal destroyed\n";
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal copied\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal assigned\n";
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

std::string Animal::getType() const
{
	return type;
}
