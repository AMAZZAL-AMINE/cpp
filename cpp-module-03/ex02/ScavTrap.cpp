/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:09:20 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/12 21:09:21 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = name;
	this->type = "ScavTrap";
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap  : copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : destructor called" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap : assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->attackDamage = rhs.attackDamage;
		this->energyPoints = rhs.energyPoints;
		this->hitPoints = rhs.hitPoints;
		this->name = rhs.name;
	}
	return *this;
}
