/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:06:27 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 17:49:37 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random"), _hitPoint(10), _energyPoint(10), _attackDamage(10) {
    std::cout << "A clap trap is going to be constructed\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "clap trap is detroyed\n";
}


ClapTrap::ClapTrap(ClapTrap& trapCopy) {
    *this = trapCopy;
    std::cout << this->getName() << "'s copy is ready\n";
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_attackDamage = 10;
    this->_energyPoint = 10;
    this->_hitPoint = 10;
    std::cout << this->getName() << " is ready\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap& trapCopy) {
    this->_name = trapCopy.getName();
    this->_attackDamage = trapCopy.getAttackDamage();
    this->_energyPoint = trapCopy.getEnergyPoint();
    this->_hitPoint = trapCopy.getHitPoint();
    std::cout << this->getName() << " is ready\n";
    return *this;
}

void ClapTrap::setName(std::string name) {
    this->_name = name;
}

void ClapTrap::setHitPoint(unsigned int value) {
    this->_hitPoint = value;
}

void ClapTrap::setEnergyPoint(unsigned int value) {
    this->_energyPoint = value;
}

void ClapTrap::setAttackDamage(unsigned int value) {
    this->_attackDamage = value;
}

std::string ClapTrap::getName() {
    return this->_name;
}

int ClapTrap::getHitPoint() {
    return this->_hitPoint;
}

int ClapTrap::getEnergyPoint() {
    return this->_energyPoint;
}

int ClapTrap::getAttackDamage() {
    return this->_attackDamage;
}

void ClapTrap::adjustHitpoint(int value) {
    this->_hitPoint += value;
}

void ClapTrap::adjustEnergyPoint(int value) {
    this->_energyPoint += value;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << this->getName() << " is attacking " << target << std::endl;
    if (this->getHitPoint() <= 1) {
      std::cout << this->getName() << " is broken and canot attack"<< std::endl;
      return;
    }
    if (this->getEnergyPoint() <= 0) {
      std::cout << this->getName() << " has 0 energy and cannot attack"<< std::endl;
      return;
    }
    this->adjustEnergyPoint(-1);
    std::cout << this->getName() << " has " << this->getEnergyPoint() << " engery points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->getHitPoint() <= 0) {
      std::cout << this->getName() << " is already broken"<< std::endl;
      return;
    }
    this->adjustHitpoint(-amount);
    std::cout << this->getName() << " is taking " << amount << " damages" << std::endl;
    std::cout << this->getName() << " has " << this->getHitPoint() << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->getName() << " is repairing" << std::endl;
    if (this->getHitPoint() <= 0) {
      std::cout << this->getName() << " is broken and cannot repair itself"<< std::endl;
      return;
    }
    if (this->getEnergyPoint() <= 0) {
      std::cout << this->getName() << " has 0 energy and cannot repair itself"<< std::endl;
      return;
    }
    this->adjustHitpoint(amount);
    std::cout << this->getName() << " has " << this->getHitPoint() << " hit points left" << std::endl;
    this->adjustEnergyPoint(-1);
    std::cout << this->getName() << " has " << this->getEnergyPoint() << " engery points left" << std::endl;
}