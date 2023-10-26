/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:41 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/26 13:31:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "main.h"

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog( Dog const & src );
		Dog &	operator=( Dog const & rhs );
		void makeSound() const;
};

#endif 