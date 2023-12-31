/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:32:31 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/26 13:51:17 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
	this->type = src.type;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &		Dog::operator=( Dog const &  rhs )
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs) {
		delete this->brain;
		this->type = rhs.type;
		this->brain = new Brain(*rhs.brain);
	}
  return *this;
}

void		Dog::makeSound() const
{
	std::cout << this->type << " maked a sound" << std::endl;
}
