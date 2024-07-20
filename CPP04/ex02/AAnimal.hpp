/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:33:49 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 20:56:57 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal
{
protected:
    std::string _type;

public:
    AAnimal();
    AAnimal(const AAnimal &original);
    virtual ~AAnimal();

    AAnimal &operator=(const AAnimal &orginal);

    void setType(std::string type);
    std::string getType() const;

    virtual void makeSound() const = 0;
};

#endif