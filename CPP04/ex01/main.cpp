/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:44:50 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 19:04:44 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *animals[5];
    for (int i = 0; i < 5; ++i) {
        if (i < 2) {
            animals[i] = new Cat();
        }
        else {
            animals[i] = new Dog();
        }
        
    }
    for (int i = 0; i < 5; ++i) {
        delete animals[i];   
    }

    std::cout << std::endl;

    Cat boss;
    boss.getBrain();

    std::cout << std::endl;

    Dog hatchi;
    hatchi.getBrain();

    std::cout << std::endl;

return 0;
}