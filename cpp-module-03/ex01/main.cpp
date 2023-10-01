/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:10:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/01 20:24:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int main(void)
{
  ClapTrap clapt("1337");
  ScavTrap scavt("42");
  std::cout << "_____________start war___________\n" << std::endl;
  clapt.attack("42");
  scavt.takeDamage(12);
  scavt.attack("1337");
  clapt.takeDamage(2);
  clapt.attack("42");
  clapt.beRepaired(6);
  std::cout << "\n_______________end war______________" << std::endl;
  return (0);
}