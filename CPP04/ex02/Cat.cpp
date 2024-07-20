/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:16:47 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 20:58:02 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat created\n";
    this->setType("Cat");
}

Cat::Cat(const Cat &original) : AAnimal(original) {
    std::cout << "Cat copy created\n";
    *this = original;
}

Cat::~Cat() {
    std::cout << "Cat is been take away\n";
}

Cat &Cat::operator=(const Cat &orginal) {
    std::cout << "Cat copy created\n";
    this->_type = orginal._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->_type << " miao miao miao" << std::endl;
}