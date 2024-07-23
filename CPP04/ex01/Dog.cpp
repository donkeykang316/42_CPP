/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:27:11 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:08:53 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog created\n";
    this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal(original) {
    std::cout << "Dog copy created\n";
    this->_brain = new Brain();
    *this = original;
}

Dog::~Dog() {
    std::cout << "Dog is been take away\n";
    delete this->_brain;
}

Dog &Dog::operator=(const Dog &orginal) {
    std::cout << "Dog copy created\n";
    if (this != &orginal) {
        this->_type = orginal._type;
        *(this->_brain) = *(orginal._brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->_type << " wuff wuff" << std::endl;
}

Brain *Dog::getBrain() const{
	return (this->_brain);
}
