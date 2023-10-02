#ifndef CAT_HPP
# define CAT_HPP

#include "main.h"

class Cat : public Animal
{
	private:
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat &	operator=(Cat const & rhs);
};

#endif