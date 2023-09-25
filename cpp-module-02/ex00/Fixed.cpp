/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:08:54 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/25 16:02:05 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->fixedPointValue = 0;
}

Fixed::Fixed(Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  this->fixedPointValue = fixed.fixedPointValue;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
  this->fixedPointValue = raw;
}
