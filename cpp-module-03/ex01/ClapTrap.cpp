/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:01:53 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/22 12:42:03 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

ClapTrap::ClapTrap() {
  std::cout << "ClapTrap Default constructors called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->name  = name;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
  std::cout << "ClapTrap name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src) {
  std::cout << "ClapTrap Copy constructor called" << std::endl;
  *this = src;
}

void ClapTrap::attack(const std::string & target) {
  if (this->energyPoints >= 1 && this->hitPoints >= 1) {
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks ";
    std::cout << target << ", causing " << this->energyPoints << std::endl;
  }else {
    std::cout << "ClapTrap can`t do anything, no hit points or energy points left" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->energyPoints >= 1 && this->hitPoints >= 1) {
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " lose ";
    std::cout << amount << " hit point " << std::endl;
  }
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
  std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
  std::cout << "ClapTrap assignment operator called" << std::endl;
  if (this != &src) {
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
  }
  return *this;
}
