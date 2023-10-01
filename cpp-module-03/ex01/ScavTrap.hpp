#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "main.h"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap(std::string name);
		void guardGate();
		~ScavTrap();
		ScavTrap & operator=( ScavTrap const & rhs );

};

#endif