/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:25:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/07 16:05:41 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main()
{
  Dog *klb = new Dog();
  Cat *msh = new Cat();
  std::cout << "___________________ TIME TO DANCE ___________________" << std::endl;
  klb->makeSound();
  msh->makeSound();
  std::cout << "___________________ TIME TO DIE ___________________" << std::endl;
  delete klb;
  delete msh;
  return 0;
}
