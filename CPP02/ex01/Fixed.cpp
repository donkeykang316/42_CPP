/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:34:22 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 17:13:36 by kaan             ###   ########.fr       */
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
    return *this;
}

int Fixed::getRawBits() const{
    return _nbrValue;
}

void Fixed::setRawBits(int const Raw) {
    _nbrValue = Raw;
}

Fixed::Fixed(const int Value) {
    std::cout << "Int constructor called\n";
    this->_nbrValue = (Value << Fixed::_nbrFratBits);
}

Fixed::Fixed(const float Value) {
    std::cout << "Float constructor called\n";
    _nbrValue = roundf(Value * (1 << Fixed::_nbrFratBits));
}

float Fixed::toFloat() const {
    return ((float)_nbrValue / (1 << Fixed::_nbrFratBits));
}

int Fixed::toInt() const {
    return ((int)_nbrValue / (1 << Fixed::_nbrFratBits));
}

std::ostream &operator<<(std::ostream &floatingRepresentation, const Fixed &nbrValue) {
    return (floatingRepresentation << nbrValue.toFloat());
}