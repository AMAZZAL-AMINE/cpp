/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:51:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 10:31:38 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "main.h"

class Contact {
  private : 
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkSecret;
    std::string phone;
  public :
    Contact (std::string firstName="", std::string lastName="", std::string nickName="", std::string darkSecret="", std::string phone="") {
      this->firstName = firstName;
      this->lastName = lastName;
      this->nickName = nickName;
      this->darkSecret = darkSecret;
      this->phone = phone;
    }
    std::string getFirstName() {
      return this->firstName;
    }
    std::string getLastName() {
      return this->lastName;
    }
    std::string getNickName() {
      return this->nickName;
    }
    std::string getdarkSecret() {
      return this->darkSecret;
    }
    std::string getPhone() {
      return this->phone;
    }
};

#endif