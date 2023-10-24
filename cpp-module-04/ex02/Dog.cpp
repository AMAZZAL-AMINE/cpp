/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:32:31 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/24 20:35:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog :  default Constructor called" << std::endl;
	this->type = "DOG";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog :  copy Constructor called" << std::endl;
	*this = src;
}


Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog :  destructor called" << std::endl;
}

void Dog::makeSound() {
	AAnimal::makeSound();
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog :  asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->brain = rhs.brain;
		this->type = rhs.type;
	}
	return *this;
}
