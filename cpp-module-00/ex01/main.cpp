/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:29:43 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/20 20:03:18 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string  ReadInputName(std::string name) {
  std::cout << "Enter Contact Name : ";
  std::getline(std::cin, name);
  std::endl(std::cout);
  return name;
}
std::string  ReadInputPhone(std::string phone) {
  std::cout << "Enter Phome number : ";
  std::getline(std::cin, phone);
  std::endl(std::cout);
  return phone;
}

int main() {
  PhoneBook phoneBook;
  std::string name, phone, command;
  while (command != "EXIT") {
    while (command == "ADD") {
      name  = ReadInputName(name);
      phone = ReadInputPhone(phone);
      phoneBook.AddContact(Contact(name, phone)); 
      command = "";
    }
    if (command == "SHOW") {
      phoneBook.DisplayContacts();
    }
    std::cout << "Enter you command : " ;
    std::getline(std::cin, command);
  }
  return 0;
}
