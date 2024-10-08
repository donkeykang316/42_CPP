/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:02:39 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:27:11 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Animal created\n";
}

AAnimal::AAnimal(const AAnimal &original) {
    std::cout << "Animal copy created\n";
    *this = original;
}

AAnimal::~AAnimal() {
    std::cout << "Animal is been take away\n";
}

AAnimal &AAnimal::operator=(const AAnimal &orginal) {
    std::cout << "Animal copy created\n";
    this->_type = orginal._type;
    return *this;
}

std::string AAnimal::getType() const {
    return _type;
}
