/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:30:46 by kaan              #+#    #+#             */
/*   Updated: 2024/07/07 21:04:58 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(std::string zombieName) : _name(zombieName) {}

    ~Zombie() {
        std::cout << _name << " is destroyed\n";
    }
    
    void announce() {
        std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
    }
};

#endif