/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:10:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/21 18:44:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(void) {
  ClapTrap Clap("Clap");
  Clap.takeDamage(5);
  Clap.attack("track");
  Clap.beRepaired(5);
  return 0;
}
