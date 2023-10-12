/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:10:14 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 21:10:15 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "main.h"

class Brain
{

	private:
		std::string ideas[100];
	public:
		 Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &		operator=( Brain const & rhs );
};

#endif