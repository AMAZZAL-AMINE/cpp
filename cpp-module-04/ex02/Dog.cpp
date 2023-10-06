/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:32:31 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/06 18:39:18 by mamazzal         ###   ########.fr       */
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
	std::cout << "Dog :  copy constructor called" << std::endl;
	*this = src;
}


Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog :  destructor called" << std::endl;
}


Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog :  asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->brain = rhs.brain;
	}
	return *this;
}
