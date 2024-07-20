/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:46:51 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 16:15:07 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
private:

public:
    Cat();
    Cat(const Cat &original);
    ~Cat();

    Cat &operator=(const Cat &orginal);

    void makeSound() const;
};

#endif