/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:53:02 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 17:29:49 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbrValue(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& Original) {
   std::cout << "Copy constructor called\n";
   *this = Original;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& Other) {
    std::cout << "Copy assignment operator called\n";
    this->_nbrValue = Other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called\n";
    return _nbrValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    _nbrValue = raw;
}
