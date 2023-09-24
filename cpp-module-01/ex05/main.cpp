/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:22:39 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 19:56:56 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main() {
  Harl *harlObj = new Harl;
  std::string input;

  std::cout << "PUT THE HARL COMMANDE : ";
  std::getline(std::cin, input);
  if (input.empty()) {
    std::cout << "Input Cant be empty" << std::endl;
    return (0);
  }
  harlObj->complain(input);
  return 0;
}