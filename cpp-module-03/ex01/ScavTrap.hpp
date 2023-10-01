/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:04:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/01 13:15:32 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "main.h"

class ScavTrap {
  protected :
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
  public :
    ScavTrap();
    ScavTrap(std::string name);
    void attack(std::string const & target);
    void guardGate();
    ~ScavTrap();
};

#endif