#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.h"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal( Animal const & src );
		 void makeSound() const;
		std::string getType() const;
		~Animal();
		Animal &		operator=( Animal const & rhs );
};

#endif