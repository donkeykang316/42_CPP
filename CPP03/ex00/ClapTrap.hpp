/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:02:19 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 17:49:46 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoint;
    unsigned int    _energyPoint;
    unsigned int    _attackDamage;

public:
    ClapTrap();
    ClapTrap(ClapTrap& trapCopy);
    ~ClapTrap();

    ClapTrap &operator=(ClapTrap& trapCopy);

    ClapTrap(std::string name);

    void setName(std::string name);
    void setHitPoint(unsigned int value);
    void setEnergyPoint(unsigned int value);
    void setAttackDamage(unsigned int value);
    std::string getName();
    int getHitPoint();
    int getEnergyPoint();
    int getAttackDamage();

    void adjustHitpoint(int value);
    void adjustEnergyPoint(int value);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif