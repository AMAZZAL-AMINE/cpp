/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:25:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/22 16:01:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src ) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src ) {
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap name Constructor called" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}
