/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:22:44 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/23 12:24:44 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "main.h"

class Weapon {
  private :
    std::string _type;
  public :
    Weapon(std::string type);
    std::string getType();
    void setType(const std::string type);
    ~Weapon();
};

#endif