#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "WrongAnimal copied\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal assigned\n";
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}
