/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:19:14 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 22:22:46 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level) {
        t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        std::string Levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        for (int i = 0; i < 4; ++i) {
            if (Levels[i] == level) {
                (this->*funcs[i])();
            }
        }
    }