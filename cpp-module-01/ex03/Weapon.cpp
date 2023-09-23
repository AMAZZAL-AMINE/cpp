/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:22:40 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/23 12:30:40 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Weapon::Weapon(std::string type) {
  this->_type = type;
}

void Weapon::setType(const std::string type) {
  this->_type = type;
}

std::string Weapon::getType() {
  return this->_type;
}

Weapon::~Weapon() {}