/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:27:11 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 19:05:20 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->_brain = new Brain();
    std::cout << "Dog created\n";
    this->setType("Dog");
    this->_brain->setIdea("Play ball", 0);
    this->_brain->setIdea("Lick down there", 1);
    this->_brain->setIdea("Catch car", 2);
    this->_brain->setIdea("Samell butt", 3);
    this->_brain->setIdea("Eat chicken", 4);
}

Dog::Dog(const Dog &original) : Animal(original) {
    std::cout << "Dog copy created\n";
    *this = original;
}

Dog::~Dog() {
    std::cout << "Dog is been take away\n";
    delete _brain;
}

Dog &Dog::operator=(const Dog &orginal) {
    std::cout << "Dog copy created\n";
    this->_type = orginal._type;
    return *this;
}

Brain *Dog::getBrain() {
    for (int i = 0; i < 5; ++i) {
        std::cout << this->_brain->getIdea(i) << std::endl;
    }
    return _brain;
}