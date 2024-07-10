/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:38:06 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 00:21:40 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
    Weapon&      _weapon;
    std::string _name;

public:
    HumanA(std::string Name, Weapon weaponType) : _name(Name), _weapon(weaponType) {}
    
    ~HumanA() {
        std::cout << _name << " is killed\n";
    }

    void attack() {
        std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
    }
};

#endif