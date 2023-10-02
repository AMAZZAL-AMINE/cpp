#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "FragTrap : default constructor has been called"  << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap : copy constructer has been called"  << std::endl;
	*this = src;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	this->type = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap : name constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap : " << this->name << " wants to high five you" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	std::cout << "FragTrap : Copy assignemnet operator has been called" << std::endl;
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->attackDamage = rhs.attackDamage;
		this->energyPoints = rhs.energyPoints;
	}
	return *this;
}
