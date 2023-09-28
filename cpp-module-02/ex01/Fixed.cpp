/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:12:05 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/28 16:15:47 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->fixedPointValue = 0;
}

Fixed::Fixed(const int nbr) {
  this->fixedPointValue = roundf(nbr * (1 << this->fractionalBits));
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) {
  this->fixedPointValue = roundf(nbr * (1 << this->fractionalBits));
  std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const  {
  return this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const {
  return this->fixedPointValue / (1 << this->fractionalBits);
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::Fixed(Fixed const *fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = *fixed;
}

int Fixed::getRawBits(void) const {
  return this->fixedPointValue;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}

Fixed & Fixed::operator=(const Fixed &fixed) {
 std::cout << "Copy assignment operator called" << std::endl;
  this->fixedPointValue = fixed.getRawBits();
  return *this;
}
