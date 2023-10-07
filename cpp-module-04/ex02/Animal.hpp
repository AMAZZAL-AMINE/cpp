#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "main.h"

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();
		AAnimal &	operator=( AAnimal const & rhs );
		std::string getType() const;
		virtual void makeSound()  = 0;
};

#endif