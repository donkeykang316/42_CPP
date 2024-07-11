/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:38:21 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 11:05:27 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
    Weapon*     _weapon;
    std::string _name;

public:
    HumanB(std::string Name) : _name(Name) {}
    
    ~HumanB() {
        //std::cout << _name << " is killed\n";
    }

    void attack() {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }

    void setWeapon(Weapon& weaponType) {
        _weapon = &weaponType;
    }
};

#endif