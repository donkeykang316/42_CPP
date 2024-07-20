/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:47:26 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 20:58:24 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public AAnimal
{
private:

public:
    Dog();
    Dog(const Dog &original);
    ~Dog();

    Dog &operator=(const Dog &orginal);

    void makeSound() const;
};

#endif