/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:37 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/24 18:40:50 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "main.h"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		void	makeSound() const;
		Cat &	operator=(Cat const & rhs);
};

#endif