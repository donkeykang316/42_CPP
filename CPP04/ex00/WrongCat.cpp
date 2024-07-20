/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:26:15 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 16:28:36 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat created\n";
    this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original) {
    std::cout << "WrongCat copy created\n";
    *this = original;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat is been take away\n";
}

WrongCat &WrongCat::operator=(const WrongCat &orginal) {
    std::cout << "WrongCat copy created\n";
    this->_type = orginal._type;
    return *this;
}

void WrongCat::makeSound() {
    std::cout << this->_type << " wrong cat miao" << std::endl;
}