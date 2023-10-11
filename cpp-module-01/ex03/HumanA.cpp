/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:22:22 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/11 15:38:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

HumanA::HumanA(std::string name, Weapon &weapn) : _weapon(weapn) , name(name) {}

void HumanA::attack() {
  std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}
