/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:51:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/20 16:44:22 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "main.h"

class Contact {
  private : 
    std::string name;
    std::string phone;
  public :
    Contact (std::string name="", std::string phone="") {
      this->name = name;
      this->phone = phone;
    }
    std::string getName() {
      return this->name;
    }
    std::string getPhone() {
      return this->phone;
    }
};

#endif