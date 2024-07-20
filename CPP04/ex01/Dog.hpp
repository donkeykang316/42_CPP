/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:47:26 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 19:01:59 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
private:
    Brain *_brain;

public:
    Dog();
    Dog(const Dog &original);
    ~Dog();

    Dog &operator=(const Dog &orginal);

    Brain *getBrain();
};

#endif