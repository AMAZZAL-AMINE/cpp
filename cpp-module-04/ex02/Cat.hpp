#ifndef CAT_HPP
# define CAT_HPP

#include "main.h"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat &	operator=(Cat const & rhs);
		void makeSound();
};

#endif