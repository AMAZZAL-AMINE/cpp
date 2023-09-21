/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:29:43 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/21 12:34:52 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string  ReadInputFisrtName(std::string fisrtName) {
  std::cout << "Enter First Name : ";
  std::getline(std::cin, fisrtName);
  return fisrtName;
}

std::string  ReadInputLastName(std::string lastName) {
  std::cout << "Enter Last Name : ";
  std::getline(std::cin, lastName);
  return lastName;
}

std::string  ReadInputNickName(std::string nickName) {
  std::cout << "Enter Nick Name : ";
  std::getline(std::cin, nickName);
  return nickName;
}

std::string  ReadInputSecret(std::string secret) {
  std::cout << "Enter Secret Code : ";
  std::getline(std::cin, secret);
  return secret;
}

std::string  ReadInputPhone(std::string phone) {
  std::cout << "Enter Phome number : ";
  std::getline(std::cin, phone);
  return phone;
}

int FieldIsEmpty(std::string field) {
  if (field.empty()) {
    std::cout << "Field is empty, try again" << std::endl;
    return 1;
  }
  return 0;
}

int main() {
  PhoneBook phoneBook;
  std::string fname, lname, nname, secret, phone, command, ContactId;

  while (true) {
    while (command == "ADD") {
      fname  = ReadInputFisrtName(fname);
      while (FieldIsEmpty(fname))
        fname = ReadInputFisrtName(fname);
      lname  = ReadInputLastName(lname);
      while (FieldIsEmpty(lname))
        lname = ReadInputLastName(lname);
      nname = ReadInputNickName(nname);
      while (FieldIsEmpty(nname))
        nname = ReadInputNickName(nname);
      secret = ReadInputSecret(secret);
      while (FieldIsEmpty(secret))
        secret = ReadInputSecret(secret);
      while (FieldIsEmpty(phone))
        phone = ReadInputPhone(phone);
      phoneBook.AddContact(Contact(fname,lname, nname, secret, phone)); 
      phone = "", secret = "", nname = "", fname = "", lname = "";
      command = "";
    }
    if (command == "SEARCH") {
      phoneBook.DisplayContacts();
      std::cout << "Enter Contact ID : ";
      std::getline(std::cin, ContactId);
      if (ContactId.length() > 9) {
         std::cout << "Nah, Out of range" << std::endl;
      }else {
        if (std::stoi(ContactId) < 0)
          std::cout << "Nah, no nigga here" << std::endl;
        else
          phoneBook.SearchForContact(std::stoi(ContactId));
      }
    }else if (command == "EXIT") {
        phoneBook.Exit();
    }
    std::cout << "Enter you command : " ;
    std::getline(std::cin, command);
  }
  return 0;
}
