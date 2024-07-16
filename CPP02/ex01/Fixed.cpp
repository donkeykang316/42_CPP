/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:34:22 by kaan              #+#    #+#             */
/*   Updated: 2024/07/16 15:54:19 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbrValue(0) {
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& FixCopy) {
    std::cout << "Copy constructor called\n";
    *this = FixCopy;
}

Fixed& Fixed::operator=(const Fixed& Other) {
    std::cout << "Copy assignment operator called\n";
    this->_nbrValue = Other.getRawBits();
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called\n";
    return _nbrValue;
}

void Fixed::setRawBits(int const Raw) {
    std::cout << "setRawBits member function called\n";
    _nbrValue = Raw;
}

Fixed::Fixed(const int Value) {
    std::cout << "Int constructor called\n";
    this->_nbrValue = (Value << Fixed::_nbrFratBits);
}

Fixed::Fixed(const float Value) {
    std::cout << "Float constructor called\n";
}

float Fixed::toFloat() {
    return this->_nbrValue;
}

int Fixed::toInt() {
    return this->_nbrValue;
}