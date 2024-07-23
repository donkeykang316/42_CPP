/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:47:26 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:28:03 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public AAnimal {
private:
    Brain *_brain;

public:
    Dog();
    Dog(const Dog &original);
    ~Dog();

    Dog &operator=(const Dog &orginal);

    void makeSound() const;

    Brain *getBrain() const;
};

#endif