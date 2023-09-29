/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:11:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/29 19:47:13 by mamazzal         ###   ########.fr       */
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
    Fixed(const float nbr);
    ~Fixed();
    friend std::ostream & operator<<(std::ostream& os, const Fixed& fixed);
    //pre-decrement & pre-decrement	| ++test && --test, 
    Fixed & operator++(void);
    Fixed & operator--(void);
    //post-increment & post-decrement	 test++ && test--,
    Fixed operator++(int);
    Fixed operator--(int);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
};

#endif
