/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:49 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 16:10:05 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal &original);
    virtual ~Animal();

    Animal &operator=(const Animal &orginal);

    void setType(std::string type);
    std::string getType() const;

    virtual void makeSound() const;
};

#endif