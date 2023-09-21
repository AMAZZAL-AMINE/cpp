/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:13:50 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 19:45:03 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Zombie* newZombie( std::string name)  {
  Zombie *zombie = new Zombie(name);
  return zombie;
}

void randomChump( std::string name ) {
  Zombie *zombie = newZombie(name);
  zombie->announce();
  delete zombie;
}
