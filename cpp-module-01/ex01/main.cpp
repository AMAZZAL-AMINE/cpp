/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:22:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/22 13:06:57 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int main() {
  int n = 5;
  std::string name = "zeee";
  Zombie *newZombies =  zombieHorde(n, name);
 int count = 0;
  while (count < n) {
    newZombies[count] = Zombie(name);
    newZombies[count].announce();
    count++;
  }
  // delete [] newZombies;
  return 0;
}
