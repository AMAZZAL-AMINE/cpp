/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:25:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/24 19:56:06 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
  Animal *animals[5];
  int i = 0;
  for (; i < 5; i++)
  {
    if (i < 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }
  std::cout <<std::endl;
  std::cout << "--------- TIME TO KILL THE ANIMALS ---------" << std::endl;
  std::cout << std::endl;
  i = 0;
  for (; i < 5; i++)
  {
    delete animals[i];
  }
  return 0;
}
