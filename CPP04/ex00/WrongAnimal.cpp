/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:24:26 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 16:24:44 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original) {
    std::cout << "WrongAnimal copy created\n";
    *this = original;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal is been take away\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &orginal) {
    std::cout << "WrongAnimal copy created\n";
    this->_type = orginal._type;
    return *this;
}

void WrongAnimal::setType(std::string type) {
    _type = type;
}

std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes sound" << std::endl;
}