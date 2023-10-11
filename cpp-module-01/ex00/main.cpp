/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:46:55 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/11 13:32:37 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main() {
  std::string name = "FOO";
  std::string name2 = "BEE";
  Zombie *zombie = newZombie(name);
  zombie->announce();
  randomChump(name2);
  delete zombie;
  return 0;
}
