/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:08:58 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 15:51:51 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class Harl
{
private:
    void debug(void) {
        std::cout << "Debug yourself" << std::endl;
    }

    void info(void) {
        std::cout << "Google your own info" << std::endl;
    }

    void warning(void) {
        std::cout << "Hey! STOP!" << std::endl;
    }

    void error(void) {
        std::cout << "BOOOO!!!! WRONG!!!!" << std::endl;
    }

public:
    Harl() {}
    ~Harl() {}

    void complain(std::string level);
};

typedef void (Harl::*t_func) (void);

#endif