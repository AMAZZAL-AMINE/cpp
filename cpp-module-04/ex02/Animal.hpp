#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.h"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
		Animal &	operator=( Animal const & rhs );
		std::string getType() const;
		virtual void makeSound() = 0;
};

#endif