/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:22:39 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 19:15:03 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main() {
  Harl *harlObj = new Harl;
  std::string input;
  
  while (true) {
    std::cout << "MOOD : ";
    std::getline(std::cin, input);
    harlObj->complain(input);
  }
  return 0;
}