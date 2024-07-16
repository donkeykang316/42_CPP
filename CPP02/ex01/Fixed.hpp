/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:26:52 by kaan              #+#    #+#             */
/*   Updated: 2024/07/16 15:23:09 by kaan             ###   ########.fr       */
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

    Fixed& operator=(const Fixed& Other);
    int getRawBits()const;
    void setRawBits(int const raw);
    Fixed(const int Value);
    Fixed(const float Value);
    float toFloat();
    int toInt();
};

#endif
