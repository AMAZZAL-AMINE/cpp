/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:30:37 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/23 13:30:38 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include "main.h"

class File {
  private :
    std::string fileName;
    std::string oldString;
    std::string newString;
  public :
    File();
    void setData(std::string fileName, std::string oldString, std::string newString);
    std::string ftReplcae(std::string str);
    void readFile();
    ~File();
};

#endif