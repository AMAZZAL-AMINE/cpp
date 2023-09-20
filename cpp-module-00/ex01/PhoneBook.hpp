/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:13:01 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/20 21:08:27 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iomanip>
#include "main.h"

class PhoneBook {
  private :
    Contact *contacts;
    int index;
    int is_full;
  public :
    PhoneBook() {
      this->contacts = new Contact[8];
      this->index = 0;
      this->is_full = 0;
    }
    void AddContact(Contact contact) {
      this->contacts[this->index] = contact;
      this->index++;
      if (this->index == 8) {
        this->is_full = 1;
        this->index = 0;
      }
    }
    void DisplayContacts() {
      int count = 0;
      std::cout << "_____________________________________________" << std::endl;
      std::cout << "ID | NAME | PHONE " << std::endl;
      std::cout << "_____________________________________________" << std::endl;
      while (count < this->index || (is_full != 0 && count < 8)) {
        std::cout << " " << count << " | " << this->contacts[count].getName() << " | " << this->contacts[count].getPhone() << std::endl;
        std::cout << "_____________________________________________" << std::endl;
        count++;
      }
    }
    void SearchForContact(int searchQuery) {
        int searchCount = 0;
        if (searchQuery >= this->index || (is_full != 0 && searchQuery > 8)) {
          std::cout << "Bro Range Not found" << std::endl;
        }
        while (searchCount < this->index || (is_full != 0 && searchCount < 8)) {
          if (searchCount == searchQuery) {
            std::cout << "_____________________________________________" << std::endl;
            std::cout << "ID | NAME | PHONE " << std::endl;
            std::cout << "_____________________________________________" << std::endl;
            std::cout << " " << searchCount << " | " << this->contacts[searchCount].getName() << " | " << this->contacts[searchCount].getPhone() << std::endl;
            break;
          }
          searchCount++;
        }
    }
};

#endif  