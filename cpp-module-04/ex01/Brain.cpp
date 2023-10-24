
#include "main.h"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this  = src;
}


Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		int count = 0;
		while (count < 100) {
			this->ideas[count] = rhs.ideas[count];
			count++;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

