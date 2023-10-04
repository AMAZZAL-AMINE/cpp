#ifndef DOG_HPP
# define DOG_HPP

#include "main.h"

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &	operator=( Dog const & rhs );
};

#endif 