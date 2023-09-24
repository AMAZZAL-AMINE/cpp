/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:22:39 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 19:49:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main() {
  Harl *harlObj = new Harl;
  std::string input;
  
  while (true) {
    std::cout << "MOOD : ";
    std::getline(std::cin, input);
    if (input.empty()) {
      std::cout << "Input Cant be empty" << std::endl;
      break;
    }
    else {
      harlObj->complain(input);
    }
  }
  return 0;
}