/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:29:57 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/07 12:39:44 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

AAnimal::AAnimal()
{
	std::cout << "Animal : default constructor called" << std::endl;
	this->type = "ANIMAL";
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "Animal :  copy constructor called" << std::endl;
	*this = src;
}

void AAnimal::makeSound()  {
	std::cout << this->type << " maked a soung" << std::endl;
}

std::string AAnimal::getType() const {
	return this->type;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal :  destructor called" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "Animal :  asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}
