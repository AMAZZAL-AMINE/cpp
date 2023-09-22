/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:24:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/22 12:10:37 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
#define ZOMBIE_HPP

#include "zombie.h"

class  Zombie {
  private :
    std::string name;
  public :
    Zombie(std::string name="");
    void announce();
};

#endif