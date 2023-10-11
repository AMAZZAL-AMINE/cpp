/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:22:25 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/11 15:38:43 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define  HUMANA_HPP

#include "main.h"

class HumanA {
  private :
    std::string name;
    Weapon &_weapon;
  public :
    HumanA(std::string name, Weapon  &_weapon);
    void attack();
};
#endif