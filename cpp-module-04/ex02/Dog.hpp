#ifndef DOG_HPP
# define DOG_HPP

#include "main.h"

class Dog : public AAnimal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &	operator=( Dog const & rhs );
		void makeSound();
};

#endif 