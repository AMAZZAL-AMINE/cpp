/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:51:01 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/11 14:02:05 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
  std::string name = "HI THIS IS BRAIN";
  std::string *strPtr = &name;
  std::string & strRef = name;

  std::cout << "ADDRESS NAME => " << &name << std::endl;
  std::cout << "ADDRESS PTR  => " << strPtr << std::endl;
  std::cout << "ADDRESS REF  => " << &strRef << std::endl;

  std::cout << "VALUE NAME => " << name << std::endl;
  std::cout << "VALUE PTR  => " << *strPtr << std::endl;
  std::cout << "VALUE REF  => " << strRef << std::endl;
  return 0;
}
