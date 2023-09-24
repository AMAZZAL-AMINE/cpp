/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:34:33 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/24 19:33:48 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "main.h"

class Harl {
  private :
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
  public :
    Harl();
    void complain(std::string level);
    ~Harl();
};

#endif