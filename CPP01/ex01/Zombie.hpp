/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:47:40 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 15:16:35 by kaan             ###   ########.fr       */
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
    Zombie() {}
    
    ~Zombie() {
        std::cout << _name <<" is killed\n";
    }

    void annouce() {
        std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
    }

    void setZombie(std::string name) {
        _name = name;
    }

};

Zombie* zombieHorde(int N, std::string name);

#endif