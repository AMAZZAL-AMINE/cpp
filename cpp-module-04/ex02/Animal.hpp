/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:10:10 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 21:10:11 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.h"

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();
		AAnimal &	operator=( AAnimal const & rhs );
		std::string getType() const;
		virtual void makeSound()  = 0;
};

#endif