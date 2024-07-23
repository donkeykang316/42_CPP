/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:16:47 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:08:43 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat created\n";
    this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &original) : Animal(original) {
    std::cout << "Cat copy created\n";
    this->_brain = new Brain();
    *this = original;
}

Cat::~Cat() {
    std::cout << "Cat is been take away\n";
    delete this->_brain;
}

Cat &Cat::operator=(const Cat &orginal) {
    std::cout << "Cat copy created\n";
    if (this != &orginal) {
        this->_type = orginal._type;
        *(this->_brain) = *(orginal._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " miao miao miao" << std::endl;
}

Brain *Cat::getBrain() const{
	return (this->_brain);
}
