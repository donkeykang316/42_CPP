/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:53:02 by kaan              #+#    #+#             */
/*   Updated: 2024/07/12 15:20:14 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbrValue(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed() {
   std::cout << "Copy constructor called\n"; 
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() {
    std::cout << "getRawBits member function called\n";
}
