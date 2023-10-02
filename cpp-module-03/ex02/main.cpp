/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:10:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/02 12:39:51 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int main(void)
{
  ClapTrap clapt("1337");
  ScavTrap scavt("42");
  FragTrap fragt("gg");
  std::cout << "_______________________________" << std::endl;
  clapt.attack("42");
  scavt.takeDamage(12);
  scavt.attack("1337");
  scavt.guardGate();
  fragt.attack("42");
  fragt.highFivesGuys();
  clapt.takeDamage(2);
  fragt.takeDamage(20);
  fragt.beRepaired(6);
  clapt.attack("42");
  clapt.beRepaired(6);
  fragt.highFivesGuys();
  std::cout << "_____________________________" << std::endl;
  return (0);
}