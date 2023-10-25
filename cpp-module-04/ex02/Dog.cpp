/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:32:31 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/24 19:37:36 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}


Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

void				Dog::makeSound() const
{
	std::cout << this->type << " maked a soung" << std::endl;
}
