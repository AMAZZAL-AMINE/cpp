#include "main.h"

class WrongAnimal {
  protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		void makeSound() const;
		std::string getType() const;
		~WrongAnimal();
		WrongAnimal & operator=( WrongAnimal const & rhs );
};
