/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:11:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/09/25 17:20:43 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{
  private:
  public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float nbr);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
};

#endif
