/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:24:44 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 19:51:54 by kaan             ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed& FixCopy) {
    std::cout << "Copy assignment operator called\n";
    this->_nbrValue = FixCopy.getRawBits();
    return *this;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called\n";
    _nbrValue = roundf(value * (1 << _nbrFratBits));
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called\n";
    _nbrValue = roundf(value * (1 << _nbrFratBits));
}

float Fixed::toFloat() const{
    return ((float)_nbrValue / (1 << _nbrFratBits));
}

void Fixed::setRawBits(int const raw) {
    _nbrValue = raw;
}

int Fixed::getRawBits() const {
    return _nbrValue;
}

bool Fixed::operator>(const Fixed& fixed) const{
    if (this->toFloat() > fixed.toFloat()) {
        return true;
    }
    return false;
}

bool Fixed::operator<(const Fixed& fixed) const{
    if (this->toFloat() < fixed.toFloat()) {
        return true;
    }
    return false;
}

bool Fixed::operator>=(const Fixed& fixed) const{
    if (this->toFloat() >= fixed.toFloat()) {
        return true;
    }
    return false;
}

bool Fixed::operator<=(const Fixed& fixed) const{
    if (this->toFloat() <= fixed.toFloat()) {
        return true;
    }
    return false;
}

bool Fixed::operator==(const Fixed& fixed) const{
    if (this->toFloat() == fixed.toFloat()) {
        return true;
    }
    return false;
}

bool Fixed::operator!=(const Fixed& fixed) const{
    if (this->toFloat() != fixed.toFloat()) {
        return true;
    }
    return false;
}

Fixed Fixed::operator+(const Fixed& fixed) {
    Fixed result;

    result = this->toFloat() + fixed.toFloat();
    return result;
}

Fixed Fixed::operator-(const Fixed& fixed) {
    Fixed result;

    result = this->toFloat() - fixed.toFloat();
    return result;
}

Fixed Fixed::operator*(const Fixed& fixed) {
    Fixed result;

    result = this->toFloat() * fixed.toFloat();
    return result;
}

Fixed Fixed::operator/(const Fixed& fixed) {
    Fixed result;

    result = this->toFloat() / fixed.toFloat();
    return result;
}

Fixed Fixed::operator++() {
    ++_nbrValue;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _nbrValue++;
    return temp;
}

Fixed Fixed::operator--() {
    --_nbrValue;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _nbrValue--;
    return temp;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if ((fixed1 > fixed2) || (fixed1 >= fixed2)) {
        return fixed1;
    }
    return fixed2;
}

Fixed const &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
    if ((fixed1 > fixed2) || (fixed1 >= fixed2)) {
        return fixed1;
    }
    return fixed2;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if ((fixed1 < fixed2) || (fixed1 <= fixed2)) {
        return fixed1;
    }
    return fixed2;
}

Fixed const &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
   if ((fixed1 < fixed2) || (fixed1 <= fixed2)) {
        return fixed1;
    }
    return fixed2; 
}

std::ostream& operator<<(std::ostream &os, const Fixed &nbrValue) {
    return (os << nbrValue.toFloat());
}