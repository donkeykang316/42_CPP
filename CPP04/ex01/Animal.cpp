/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:02:39 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:01:03 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal created\n";
}

Animal::Animal(const Animal &original) {
    std::cout << "Animal copy created\n";
    *this = original;
}

Animal::~Animal() {
    std::cout << "Animal is been take away\n";
}

Animal &Animal::operator=(const Animal &orginal) {
    std::cout << "Animal copy created\n";
    this->_type = orginal._type;
    return *this;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes sound" << std::endl;
}
