/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:07:24 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 16:18:17 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Error, Example : [./program] [FILE] [OLD_STRING] [NEW_STRING]" << std::endl;
    exit(1);
  }
  File *fileObj = new File;
  std::string fileName = argv[1];
  std::string oldString  = argv[2];
  std::string newString  = argv[3];
  fileObj->setData(fileName, oldString, newString);
  fileObj->errorHnadling();
  fileObj->readFile();
  delete fileObj;
  return 0;
}
