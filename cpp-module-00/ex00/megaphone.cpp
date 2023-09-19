/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:15:16 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/19 15:34:34 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *arg[]) {
  if (argc > 1) {
    int count = 1;
    int index = 0;
    while (arg[count]) {
      index = 0;
      while (arg[count][index]) {
          putchar(toupper(arg[count][index]));


        index++;
      }
      count++;
    }
    std::cout << "\n";
  }else {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
  }
  return 0;
}

