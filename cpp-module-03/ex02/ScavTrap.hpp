/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:24 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 21:09:25 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "main.h"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap(std::string name);
		void guardGate();
		~ScavTrap();
		ScavTrap & operator=( ScavTrap const & rhs );

};

#endif