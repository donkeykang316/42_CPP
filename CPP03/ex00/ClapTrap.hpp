/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:02:19 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 21:29:11 by kaan             ###   ########.fr       */
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
    ClapTrap(const ClapTrap& trapCopy);
    ~ClapTrap();

    ClapTrap(std::string name);

    ClapTrap &operator=(const ClapTrap& trapCopy);

    void setName(std::string name);
    void setHitPoint(unsigned int value);
    void setEnergyPoint(unsigned int value);
    void setAttackDamage(unsigned int value);
    std::string getName();
    int getHitPoint();
    int getEnergyPoint();
    int getAttackDamage();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif