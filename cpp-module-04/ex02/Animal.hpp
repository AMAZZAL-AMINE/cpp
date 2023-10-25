/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/24 17:32:50 by mamazzal         ###   ########.fr       */
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
		virtual void makeSound() const = 0;
		std::string getType() const;
		virtual ~Animal();
		Animal & operator=( Animal const & rhs );
};

#endif
