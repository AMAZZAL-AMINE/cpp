#include "main.h"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default  constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this  = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called " << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << this->type << " maked a soung" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}
