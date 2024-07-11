/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:00:06 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 22:07:14 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl        harl;
    std::string Input;

    do {
        std::cout << "Enter DEBUG, INFO, WARNING, ERROR or EXIT for leaving: ";
        getline(std::cin, Input);
        harl.complain(Input);

    } while (Input.compare("EXIT"));
}