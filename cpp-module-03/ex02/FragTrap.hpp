#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "main.h"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void);
		FragTrap &	operator=( FragTrap const & rhs );
};


#endif 