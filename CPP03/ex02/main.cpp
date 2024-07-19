/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:51:33 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 19:08:02 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Atlas("Atlas");
    
    Atlas.attack("ScavTrap Anonymous");
	Atlas.takeDamage(0);
	Atlas.attack("ClapTrap Liam");
	Atlas.takeDamage(0);

	Atlas.attack("ScavTrap Anonymous");
	Atlas.takeDamage(5);
	Atlas.beRepaired(3);
	Atlas.takeDamage(8);
	Atlas.takeDamage(1);

	for (size_t i = 0; i < 9; i++)	{
		Atlas.attack("ScavTrap Anonymous");
	}

    Atlas.highFivesGuys();

	std::cout << std::endl;
}