/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:10:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/22 12:39:44 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void)
{
  ScavTrap scavt("42");

  std::cout << "_____________start war___________\n" << std::endl;
  scavt.attack("enemy");
  scavt.guardGate();
  std::cout << "\n_______________end war______________" << std::endl;
  return (0);
}
