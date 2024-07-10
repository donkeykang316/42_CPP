/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:06:24 by kaan              #+#    #+#             */
/*   Updated: 2024/07/10 19:44:45 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie*  zombies = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        zombies[i].setZombie(name);
    }
    return zombies;
}