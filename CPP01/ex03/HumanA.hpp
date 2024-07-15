/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:38:06 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 15:18:04 by kaan             ###   ########.fr       */
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
    HumanA(std::string Name, Weapon& weaponType) : _weapon(weaponType), _name(Name) {}
    
    ~HumanA() {
        //std::cout << _name << " is killed\n";
    }

    void attack() {
        std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
    }
};

#endif