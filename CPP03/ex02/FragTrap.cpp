/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:40:02 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 19:07:39 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Frag trap is under construction\n";
}

FragTrap::FragTrap(FragTrap &original) : ClapTrap(original) {
    std::cout << "Frag trap's copy is under construction\n";
    *this = original;
}
FragTrap::~FragTrap() {
    std::cout << "Frag trap is kabboomed\n";
}

FragTrap &FragTrap::operator=(FragTrap &original) {
    std::cout << "Frag trap's copy is under construction\n";
    this->_name = original.getName();
    this->_attackDamage = original.getAttackDamage();
    this->_energyPoint = original.getEnergyPoint();
    this->_hitPoint = original.getHitPoint();
    return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap("Anonymous") {
    this->_name = name;
    this->_attackDamage = 30;
    this->_energyPoint = 100;
    this->_hitPoint = 100;
    std::cout << "Frag trap " << this->getName() << " is under construction\n";
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Say High Five!!!\n";
}