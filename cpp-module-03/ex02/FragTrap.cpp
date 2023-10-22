/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:08 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/22 16:24:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap & src ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}


FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & src )
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name <<  " needs a high five!" << std::endl;
}

void FragTrap::attack(const std::string & target) {
	std::cout << "FragTrap " << this->name <<  " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}
