#include "main.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal maked a soung" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}
