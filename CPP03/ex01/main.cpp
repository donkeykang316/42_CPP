/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:00:37 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 18:26:50 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Anon("Anonymous");
    ClapTrap Liam("Liam");
	std::cout << std::endl;

	Liam.attack("ScavTrap Anonymous");
	Anon.takeDamage(0);
	Anon.attack("ClapTrap Liam");
	Liam.takeDamage(0);

	Liam.attack("ScavTrap Anonymous");
	Anon.takeDamage(5);
    Anon.guardGate();
	Anon.beRepaired(3);
	Anon.takeDamage(8);
	Anon.takeDamage(1);

	for (size_t i = 0; i < 9; i++)	{
		Liam.attack("ScavTrap Anonymous");
	}

	std::cout << std::endl;
}