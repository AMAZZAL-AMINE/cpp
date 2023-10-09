/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:07:48 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/09 13:07:51 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

PhoneBook::PhoneBook() {
  this->contacts = new Contact[8];
  this->index = 0;
  this->is_full = 0;
}

void PhoneBook::printTbaleHeader() {
  std::cout << "******************************************************************************************************" << std::endl;
  std::cout << "|" << std::setw(3) << "ID" << std::setw(3);
  std::cout << "|" << std::setw(15) << "FIRST NAME" << std::setw(5);
  std::cout << "|" << std::setw(15) << "LAST NAME" << std::setw(5);
  std::cout << "|" << std::setw(15) << "NICK NAME" << std::setw(5);
  std::cout << "|" << std::setw(15) << "DARK SECRET" << std::setw(5)<< std::endl;
  // std::cout << "|" << std::setw(10) << "PHONE" << std::setw(5) << "|" << std::endl;
  std::cout << "******************************************************************************************************" << std::endl;
}
void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, std::string phone) {
  this->contacts[this->index].setData(firstName, lastName, nickName, darkSecret,phone);
  this->index++;
  if (this->index == 8) {
    this->is_full = 1;
    this->index = 0;
  }
}
void PhoneBook::DisplayContacts() {
  int count = 0;
  this->printTbaleHeader();
  while (count < this->index || (is_full != 0 && count < 8)) {
    std::cout << "|" << std::setw(3)  << count << std::setw(3);
    std::cout << "|" << std::setw(15) << this->contacts[count].getFirstName();
    std::cout << "|" << std::setw(15) << this->contacts[count].getLastName();
    std::cout << "|" << std::setw(15) << this->contacts[count].getNickName();
    std::cout << "|" << std::setw(15) << this->contacts[count].getdarkSecret()<< std::endl;
    // std::cout << "|" << std::setw(10) << this->contacts[count].getPhone() << std::setw(5) << "|" << std::endl;
    count++;
  }
}
void PhoneBook::SearchForContact(int searchQuery) {
    int searchCount = 0;
    if (searchQuery >= this->index || (is_full != 0 && searchQuery > 8)) {
      std::cout << "Bro Range Not found" << std::endl;
    }
    while (searchCount < this->index || (is_full != 0 && searchCount < 8)) {
      if (searchCount == searchQuery) {
        std::cout << "ID" << searchCount << std::setw(3);
        std::cout << "FIRST NAME\t: " << this->contacts[searchCount].getFirstName() << std::endl;
        std::cout << "LAST NAME\t: " << this->contacts[searchCount].getLastName() << std::endl;
        std::cout << "NICKNAME\t: " << this->contacts[searchCount].getNickName() << std::endl;
        std::cout << "DARCKSECRET\t: " << this->contacts[searchCount].getdarkSecret() << std::endl;
        // std::cout << "|" << std::setw(10) << this->contacts[searchCount].getPhone() << std::setw(5) << "|" << std::endl;
        break;
      }
      searchCount++;
    }
}

void PhoneBook::Exit(void) {
  std::cout << "GOOD BY HBIBI" << std::endl;
  exit(0);
}
