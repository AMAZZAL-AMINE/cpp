/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:29:43 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/20 21:03:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string  ReadInputName(std::string name) {
  std::cout << "Enter Contact Name : ";
  std::getline(std::cin, name);
  return name;
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
  std::string name, phone, command, ContactId;

  while (command != "EXIT") {
    while (command == "ADD") {
      name  = ReadInputName(name);
      if (FieldIsEmpty(name))
        break;
      phone = ReadInputPhone(phone);
      if (FieldIsEmpty(phone))
        break;
      phoneBook.AddContact(Contact(name, phone)); 
      command = "";
    }
    if (command == "SHOW") {
      phoneBook.DisplayContacts();
    }else if (command == "SEARCH") {
      std::cout << "Enter Contact ID : ";
      std::getline(std::cin, ContactId);
      phoneBook.SearchForContact(std::stoi(ContactId));
    }
    std::cout << "Enter you command : " ;
    std::getline(std::cin, command);
  }
  return 0;
}
