/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:01:53 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/30 17:48:51 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

ClapTrap::ClapTrap() {
  std::cout << "Default constructors called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->name  = name;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
  std::cout << "Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (this->energyPoints >= 1 && this->hitPoints >= 1) {
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks ";
    std::cout << this->attackDamage << ", causing " << this->energyPoints << std::endl;
  }else {
    std::cout << "ClapTrap can`t do anything, no hit points or energy points left" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  this->hitPoints -= amount;
  std::cout << "ClapTrap " << this->name << " lose ";
  std::cout << amount << " hit point " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->energyPoints >= 1 && this->hitPoints >= 1) {
    this->hitPoints += amount;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " get ";
    std::cout << this->hitPoints << " hit points back " << std::endl;
  }
}

ClapTrap::~ClapTrap() {
  std::cout << "destructor called" << std::endl;
}
