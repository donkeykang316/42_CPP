/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:16:47 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 19:00:30 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->_brain = new Brain();
    std::cout << "Cat created\n";
    this->setType("Cat");
    this->_brain->setIdea("Sleep", 0);
    this->_brain->setIdea("Climb", 1);
    this->_brain->setIdea("Chase mouse", 2);
    this->_brain->setIdea("Lick face", 3);
    this->_brain->setIdea("Eat canned tuna", 4);
}

Cat::Cat(const Cat &original) : Animal(original) {
    std::cout << "Cat copy created\n";
    *this = original;
}

Cat::~Cat() {
    std::cout << "Cat is been take away\n";
    delete _brain;
}

Cat &Cat::operator=(const Cat &orginal) {
    std::cout << "Cat copy created\n";
    this->_type = orginal._type;
    return *this;
}

Brain *Cat::getBrain() {
    for (int i = 0; i < 5; ++i) {
        std::cout << this->_brain->getIdea(i) << std::endl;
    }
    return _brain;
}
