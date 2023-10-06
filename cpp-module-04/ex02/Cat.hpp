#ifndef CAT_HPP
# define CAT_HPP

#include "main.h"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat &	operator=(Cat const & rhs);
		void makeSound () OVERRIDE {
			this->makeSound();
		}
};

#endif