/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:02:25 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/21 18:40:53 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "main.h"

class ClapTrap {
  private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
  public:
    ClapTrap();
    ClapTrap(ClapTrap & src);
    ClapTrap &operator=(ClapTrap const &src);
    ~ClapTrap();
    ClapTrap(std::string name);
    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif