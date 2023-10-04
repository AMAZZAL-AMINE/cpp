/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:48:11 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/03 16:10:13 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Brain::Brain()
{
	std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain : copy assingment constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain : desctructor called" << std::endl;
}


Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain : copy overload operator called" << std::endl;
	if ( this != &rhs )
	{
		int count = 0;
		while (count < rhs.ideas->length()) {
			this->ideas[count] = rhs.ideas[count];
			count++;
		}
	}
	return *this;
}
