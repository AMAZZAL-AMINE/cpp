/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:35:59 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 19:59:49 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Harl::Harl() {
  
}

void Harl::debug() {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
  std::string moods[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int count  = 0;
  int stop = -1;
  while (count < 4) {
    if (level == moods[count]) {
      stop = count;
      break;
    }
    count++;
  }

  if (stop == -1) {
    std::cout << "Harl not found" << std::endl;
    return ;
  }
  switch(stop) {
    case 0 :
      this->debug();
       break;
    case 1 :
      this->info();
       break;
    case 2 :
      this->warning();
       break;
    case 3 :
      this->error();
      break;
  }
}

Harl::~Harl() {}