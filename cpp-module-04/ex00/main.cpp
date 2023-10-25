/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:25:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/25 18:12:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int wrongAnimalTest() {
  const WrongAnimal* wrongAnimal = new WrongCat();
  wrongAnimal->makeSound();
  delete wrongAnimal;
  return 0;
}

int main()
{
  std::cout << "_______ FAKE ANIMALS TEST_______" << std::endl;
  std::cout << std::endl;
  wrongAnimalTest();
  std::cout << std::endl;
  std::cout << "_______ REALL ANIMALS TEST_______" << std::endl;
  std::cout << std::endl;
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete j;
  delete i;
  delete meta;
  return 0;
}
