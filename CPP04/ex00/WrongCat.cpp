/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:26:15 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 14:15:07 by kaan             ###   ########.fr       */
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

void WrongCat::makeSound() const{
    std::cout << this->_type << " wrong cat miao" << std::endl;
}