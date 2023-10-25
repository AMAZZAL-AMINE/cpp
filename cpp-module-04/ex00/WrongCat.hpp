#include "main.h"

class WrongCat : public WrongAnimal {
  private:
	public:
		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();
		void	makeSound() const;
		WrongCat &	operator=(WrongCat const & rhs);
};