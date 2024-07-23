/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:49 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:01:09 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Brain.hpp"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &assign);
	virtual ~Animal();

	std::string getType() const;

	virtual void makeSound() const;
};

#endif