/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:47:30 by kaan              #+#    #+#             */
/*   Updated: 2024/07/12 18:19:21 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int                 _nbrValue;
    static const int    _nbrFratBits;

public:
    Fixed();
    Fixed(const Fixed& FixedCopy);
    Fixed& operator=(const Fixed& Other);
    ~Fixed();
    int getRawBits();
    void setRawBits(int const raw);
};

#endif