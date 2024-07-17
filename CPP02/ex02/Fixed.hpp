/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:56:42 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 19:37:05 by kaan             ###   ########.fr       */
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

    Fixed &operator=(const Fixed& FixCopy);
    int getRawBits()const;
    void setRawBits(int const raw);

    Fixed(const float value);
    Fixed(const int value);

    float toFloat()const;

    bool operator>(const Fixed& fixed)const;
    bool operator<(const Fixed& fixed)const;
    bool operator>=(const Fixed& fixed)const;
    bool operator<=(const Fixed& fixed)const;
    bool operator==(const Fixed& fixed)const;
    bool operator!=(const Fixed& fixed)const;
    Fixed operator+(const Fixed& fixed);
    Fixed operator-(const Fixed& fixed);
    Fixed operator*(const Fixed& fixed);
    Fixed operator/(const Fixed& fixed);
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &nbrValue);

#endif