#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "main.h"
class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap( ScavTrap  & src );
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap & src );
		ScavTrap(std::string name);
		void attack(const std::string & target);
		void guardGate();
};

#endif 