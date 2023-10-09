/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:48:35 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/09 11:05:07 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Contact::Contact() {

}

void Contact::setData(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, std::string phone) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->nickName = nickName;
  this->darkSecret = darkSecret;
  this->phone = phone;
}

std::string Contact::getFirstName() {
  if (this->firstName.length() > 10)
    return this->firstName.substr(0, 9) + ".";
  return this->firstName;
}

std::string Contact::getLastName() {
  if (this->lastName.length() > 10)
    return this->lastName.substr(0, 9) + ".";
  return this->lastName;
}

std::string Contact::getNickName() {
    if (this->nickName.length() > 10)
    return this->nickName.substr(0, 9) + ".";
  return this->nickName;
}

std::string Contact::getdarkSecret() {
  if (this->darkSecret.length() > 10)
    return this->darkSecret.substr(0, 9) + ".";
  return this->darkSecret;
}

std::string Contact::getPhone() {
  if (this->phone.length() > 10)
    return this->phone.substr(0, 9) + ".";
  return this->phone;
}
