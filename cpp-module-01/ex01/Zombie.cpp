/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:22:55 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/22 12:19:12 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

void Zombie::setName(std::string name) {
  this->name = name;
}

void  Zombie::announce() {
 std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
 int count = 0;
}
