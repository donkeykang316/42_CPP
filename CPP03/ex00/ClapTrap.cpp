/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:06:27 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 21:40:19 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "A clap trap is going to be constructed\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "clap trap is detroyed\n";
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_attackDamage = 10;
    this->_energyPoint = 10;
    this->_hitPoint = 10;
    std::cout << _name << "is ready\n";
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
    return _name;
}

int ClapTrap::getHitPoint() {
    return _hitPoint;
}

int ClapTrap::getEnergyPoint() {
    return _energyPoint;
}

int ClapTrap::getAttackDamage() {
    return _attackDamage;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << _name << " is attacking " << target << std::endl;
    if (_hitPoint == 0) {
      std::cout << _name << " is broken"<< std::endl;
      return;
    }
    if (_energyPoint == 0) {
      std::cout << _name << " has 0 energy"<< std::endl;
      return;
    }
    std::cout << target << " received " << _attackDamage << " damages" << std::endl;
    this->setEnergyPoint(-1);
    std::cout << _name << " has " << _energyPoint << " engery points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoint == 0) {
      std::cout << _name << " is already broken"<< std::endl;
      return;
    }
    if (_energyPoint == 0) {
      std::cout << _name << " has 0 energy"<< std::endl;
      return;
    }
    this->setHitPoint(amount);
    std::cout << _name << " is taking " << amount << " damages" << std::endl;
    std::cout << _name << " has " << _hitPoint << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << _name << " is repairing" << std::endl;
    if (_hitPoint == 0) {
      std::cout << _name << " is broken"<< std::endl;
      return;
    }
    if (_energyPoint == 0) {
      std::cout << _name << " has 0 energy"<< std::endl;
      return;
    }
    this->setHitPoint(amount);
    std::cout << _name << " has " << _hitPoint << " hit points left" << std::endl;
    this->setEnergyPoint(-1);
    std::cout << _name << " has " << _energyPoint << " engery points left" << std::endl;
}