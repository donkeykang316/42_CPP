/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:22:38 by kaan              #+#    #+#             */
/*   Updated: 2024/07/17 21:22:42 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Liam("ClapTrap Liam");
	ClapTrap Anon;
	std::cout << std::endl;

	Liam.attack("ClapTrap Anonymous");
	Anon.takeDamage(0);
	Anon.attack("ClapTrap Liam");
	Liam.takeDamage(0);

	Liam.attack("ClapTrap Anonymous");
	Anon.takeDamage(5);
	Anon.beRepaired(3);
	Anon.takeDamage(8);
	Anon.takeDamage(1);

	for (size_t i = 0; i < 9; i++)	{
		Liam.attack("ClapTrap Anonymous");
	}

	std::cout << std::endl;
	return 0;
}