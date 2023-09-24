/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:22:39 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 18:31:42 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Args must be 2" << std::endl;
    return 1;
  }
  Harl *harlObj = new Harl;
  std::string input = argv[1];
  harlObj->complain(input);
  return 0;
}