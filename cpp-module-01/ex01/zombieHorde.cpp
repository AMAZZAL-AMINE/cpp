/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:26:38 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/22 13:06:40 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* zombieHorde(int N, std::string name) {
  Zombie *newZombies = new Zombie[N];
  int count = -1;
  while (++count < N)
    newZombies[count].setName(name);
  return  newZombies;
}
