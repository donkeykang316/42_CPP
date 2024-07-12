/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:53:02 by kaan              #+#    #+#             */
/*   Updated: 2024/07/12 18:21:31 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbrValue(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& FixedCopy) {
   std::cout << "Copy constructor called\n"; 
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& Other) {
    std::cout << "Copy assignment operator called\n";
    _nbrValue = Other._nbrValue;
    return *this;
}

int Fixed::getRawBits() {
    std::cout << "getRawBits member function called\n";
    return _nbrValue;
}

void Fixed::setRawBits(int const raw) {
    _nbrValue = raw;
}
