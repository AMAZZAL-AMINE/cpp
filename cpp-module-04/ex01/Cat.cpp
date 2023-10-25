/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:40:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/25 23:53:06 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Cat::Cat()
{
	std::cout << "Cat default  constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this  = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called " << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << this->type << " maked a soung" << std::endl;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat asignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
		// delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}
