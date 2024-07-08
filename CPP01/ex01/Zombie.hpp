/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:47:40 by kaan              #+#    #+#             */
/*   Updated: 2024/07/08 11:03:12 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
    int         _index;

public:
    Zombie(int index, std::string zombieName) : _index(index), _name(zombieName) {}
    
    ~Zombie() {
        std::cout << _name << " is killed\n";
    }

    void annouce() {
        std::cout << ": BraiiiiiiinnnzzzZ...\n";
    }

};

Zombie* zombieHorde(int N, std::string name);