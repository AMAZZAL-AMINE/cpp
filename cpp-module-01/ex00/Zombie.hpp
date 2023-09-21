/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:49:14 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 18:09:05 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "main.h"

class Zombie {
  private :
    std::string name;
  public :
    Zombie(std::string name);
    void announce(void) {
      std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

#endif