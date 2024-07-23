/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:44:50 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:28:28 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const int animalCount = 6;
	AAnimal *tab[animalCount];
    std::string dogIdeas[] = {"Play ball", "Lick down there", "Catch car", "Smell butt", "Eat chicken"};
	std::string catIdeas[] = {"Sleep", "Climb", "Chase mouse", "Lick face", "Eat canned tuna"};
    
    for (int i = 0; i < animalCount; i++) {
		if (i < animalCount / 2) {
			tab[i] = new Dog();
			for (int j = 0; j < 5; j++) static_cast<Dog*>(tab[i])->getBrain()->_ideas[j] = dogIdeas[j];
		} else {
			tab[i] = new Cat();
			for (int j = 0; j < 5; j++) static_cast<Cat*>(tab[i])->getBrain()->_ideas[j] = catIdeas[j];
		}
		tab[i]->makeSound();
	}

	std::cout << "----------------" << std::endl;
	for (int i = 0; i < animalCount; i++) {
		std::cout << "Animal " << i + 1 << " (" << tab[i]->getType() << ") thoughts: " << std::endl;
		if (tab[i]->getType() == "Dog") {
			Dog* dog = static_cast<Dog*>(tab[i]);
			for (int j = 0; j < 5; j++) std::cout << "|" << dog->getBrain()->_ideas[j] << "|" << std::endl;
		} else if (tab[i]->getType() == "Cat") {
			Cat* cat = static_cast<Cat*>(tab[i]);
			for (int j = 0; j < 5; j++) std::cout << "|" << cat->getBrain()->_ideas[j] << "|" << std::endl;
		}
		std::cout << "----------------" << std::endl;
	}
	for (int i = 0; i < animalCount; i++) delete tab[i];
    std::cout << std::endl;

    Cat boss;
    boss.getBrain()->_ideas[0] = "1st thought\n";
    std::cout << std::endl;
    Cat cc = boss;
    std::cout << cc.getBrain()->_ideas[0] << std::endl;
    std::cout << std::endl;
	return 0;
}