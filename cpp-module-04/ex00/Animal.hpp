/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 21:09:33 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.h"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal( Animal const & src );
		 void makeSound();
		std::string getType() const;
		~Animal();
		Animal &		operator=( Animal const & rhs );
};

#endif