/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:25:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/07 13:09:27 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
  int size = 10;
  AAnimal *animals[size];
  int count = 0;
  while (count < size / 2) {
    animals[count] = new Dog;
    animals[count]->makeSound();
    count++;
  }
  count = size / 2;
  while (count < size) {
    animals[count] = new Cat;
    animals[count]->makeSound();
    count++;
  }
  count = 0;
  while (count < size) {
    delete animals[count];
    count++;
  }
  return 0;
}
