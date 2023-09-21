/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:48:34 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 20:14:56 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Zombie::Zombie(std::string name) {
  this->name = name;
}

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
