/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:26:52 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 16:46:29 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int                 _nbrValue;
    static const int    _nbrFratBits = 8;

public:
    Fixed();
    Fixed(const Fixed& FixCopy);
    ~Fixed();

    Fixed &operator=(const Fixed& Other);
    int getRawBits()const;
    void setRawBits(int const raw);
    Fixed(const int Value);
    Fixed(const float Value);
    float toFloat()const;
    int toInt()const;
};

std::ostream &operator<<(std::ostream &floatingRepresentation, Fixed const &fixedNumber);

#endif
