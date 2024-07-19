/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:55:40 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 18:28:49 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _gateMode(false) {
     std::cout << "A scav trap is going to be constructed\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "scav trap is detroyed\n";
}

ScavTrap::ScavTrap(ScavTrap& trapCopy) : ClapTrap(trapCopy) {
    *this = trapCopy;
    std::cout << this->getName() << "'s copy is ready\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap& trapCopy) {
    this->_name = trapCopy.getName();
    this->_attackDamage = trapCopy.getAttackDamage();
    this->_energyPoint = trapCopy.getEnergyPoint();
    this->_hitPoint = trapCopy.getHitPoint();
    std::cout << this->getName() << " is ready\n";
    return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_name = name;
    this->_attackDamage = 10;
    this->_energyPoint = 10;
    this->_hitPoint = 10;
    std::cout << this->getName() << " is ready\n";
}

void ScavTrap::guardGate() {
    std::cout << this->getName() << " becomes guard gate\n";
    this->_gateMode = true;
}