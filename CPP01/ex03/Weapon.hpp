/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:16:05 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 11:05:45 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string weaponType) : _type(weaponType){}
    
    ~Weapon() {
        //std::cout << "Weapon " << _type << " destroyed\n";
    }

    std::string getType() const {
        return _type;
    }

    void setType(std::string newType) {
        _type = newType;
    }
};

#endif