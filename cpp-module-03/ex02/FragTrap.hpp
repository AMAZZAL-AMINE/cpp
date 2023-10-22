#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "main.h"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap( FragTrap & src );
		~FragTrap();
		FragTrap & operator=( FragTrap const & rhs );
		FragTrap(std::string name);
		void attack(const std::string & target);
		void highFivesGuys(void);
};

#endif