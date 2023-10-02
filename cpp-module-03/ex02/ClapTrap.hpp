/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:02:25 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/02 12:33:10 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "main.h"

class ClapTrap {
  protected:
    std::string name;
    std::string type;
    int hitPoints;
    int energyPoints;
    int attackDamage;
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap( ClapTrap const & src );
    void printData();
    ClapTrap & operator=( ClapTrap const & rhs );
    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif