/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:27:11 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 20:58:26 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog created\n";
    this->setType("Dog");
}

Dog::Dog(const Dog &original) : AAnimal(original) {
    std::cout << "Dog copy created\n";
    *this = original;
}

Dog::~Dog() {
    std::cout << "Dog is been take away\n";
}

Dog &Dog::operator=(const Dog &orginal) {
    std::cout << "Dog copy created\n";
    this->_type = orginal._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type << " wuff wuff" << std::endl;
}