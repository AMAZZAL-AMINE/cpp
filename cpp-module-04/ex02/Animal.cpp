/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:29:57 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/06 19:00:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Animal::Animal()
{
	std::cout << "Animal : default constructor called" << std::endl;
	this->type = "ANIMAL";
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal :  copy constructor called" << std::endl;
	*this = src;
}

void Animal::makeSound()   {
	std::cout << this->type << " maked a soung" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Animal :  destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal :  asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}
