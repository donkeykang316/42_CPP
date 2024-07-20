/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:18:30 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 16:28:12 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat(const WrongCat &original);
    ~WrongCat();

    WrongCat &operator=(const WrongCat &orginal);

    void makeSound();
};

#endif