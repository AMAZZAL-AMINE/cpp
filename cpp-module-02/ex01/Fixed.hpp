/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:11:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/28 16:06:45 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "main.h"

class Fixed{
  private:
    int fixedPointValue;
    static const int fractionalBits = 8;
  public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int nbr);
    Fixed(Fixed const *fixed);
    Fixed(const float nbr);
    friend std::ostream & operator<<(std::ostream& os, const Fixed& fixed);
    Fixed & operator=(const Fixed &fixed);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    ~Fixed();
};

#endif
