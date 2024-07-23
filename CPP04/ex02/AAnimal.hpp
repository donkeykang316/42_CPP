/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:49 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 21:26:48 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Brain.hpp"

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(const AAnimal &src);
	AAnimal &operator=(const AAnimal &assign);
	virtual ~AAnimal();

	std::string getType() const;

	virtual void makeSound() const = 0;
};

#endif