#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat created\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed\n"; 
}

void WrongCat::makeSound() const
{
    std::cout << "Mew Mew\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    this->type = other.type;
    std::cout << "WrongCat copied\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongCat assigned\n";
	return *this;
} 