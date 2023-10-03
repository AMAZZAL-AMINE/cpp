/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:40:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/03 16:48:47 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Cat::Cat()
{
	std::cout << "Cat :  default  constructor called" << std::endl;
	this->type = "CAT";
	this->brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat :  copy constructor called" << std::endl;
	*this  = src;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat :  destructor called " << std::endl;
}


Cat &	Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat asignment operator called" << std::endl;
	if (this != &rhs )
		this->brain = rhs.brain;
	return *this;
}

