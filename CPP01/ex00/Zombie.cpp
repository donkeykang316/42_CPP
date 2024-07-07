/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:37:09 by kaan              #+#    #+#             */
/*   Updated: 2024/07/07 21:11:12 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *new_zombie = new Zombie(name);
    return new_zombie;
}

void    randomChump(std::string name) {
    Zombie stackZombie(name);
    stackZombie.announce();
}

int main(void)
{
    Zombie*  zombieNew = newZombie("Fopp");
    zombieNew->announce();

    randomChump("Roaming D");
    
    delete zombieNew;
}