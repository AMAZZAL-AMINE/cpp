/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:01:53 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/21 18:49:21 by mamazzal         ###   ########.fr       */
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
  std::cout << "ClapTrap : Constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (this->energyPoints >= 1 && this->hitPoints >= 1) {
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks ";
    std::cout << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
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

ClapTrap::ClapTrap(ClapTrap &copy) {
  std::cout << "ClapTrap : Copy constructor called" << std::endl;
  *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op) {
  std::cout << "ClapTrap : Assignation operator called" << std::endl;
  if (this != &op) {
    this->name = op.name;
    this->hitPoints = op.hitPoints;
    this->energyPoints = op.energyPoints;
    this->attackDamage = op.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap : destructor called" << std::endl;
}


void ClapTrap::printData() {
  std::cout << "Name => " << this->name << std::endl;
  std::cout << "HitPpint => " << this->hitPoints << std::endl;
  std::cout << "EnPoint => " << this->energyPoints << std::endl;
  std::cout << "AttakPoint => " << this->attackDamage << std::endl;
}