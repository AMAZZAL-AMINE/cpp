/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:51:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 16:42:03 by mamazzal         ###   ########.fr       */
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
      if (this->firstName.length() > 10)
        return this->firstName.substr(0, 9) + ".";
      return this->firstName;
    }
    std::string getLastName() {
      if (this->lastName.length() > 10)
        return this->lastName.substr(0, 9) + ".";
      return this->lastName;
    }
    std::string getNickName() {
       if (this->nickName.length() > 10)
        return this->nickName.substr(0, 9) + ".";
      return this->nickName;
    }
    std::string getdarkSecret() {
      if (this->darkSecret.length() > 10)
        return this->darkSecret.substr(0, 9) + ".";
      return this->darkSecret;
    }
    std::string getPhone() {
      if (this->phone.length() > 10)
        return this->phone.substr(0, 9) + ".";
      return this->phone;
    }
};

#endif