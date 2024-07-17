/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:47:30 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 12:56:49 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int                 _nbrValue;
    static const int    _nbrFratBits = 8;

public:
    Fixed();
    Fixed(const Fixed& FixedCopy);
    ~Fixed();
    
    Fixed& operator=(const Fixed& Other);
    int getRawBits()const;
    void setRawBits(int const raw);
};

#endif