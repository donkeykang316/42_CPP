/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:13:50 by kaan              #+#    #+#             */
/*   Updated: 2024/07/07 19:38:26 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>

int main(void)
{
    Phonebook   phonebook;
    int         command;
    std::string input;

    for (;;)
    {
        std::cout << "Enter command (ADD, SEARCH or EXIT)" << std::endl;
        std::cin >> input;

        std::cin.ignore();
        command = phonebook.getCommand(input);
        switch (command)
        {
            case phonebook.ADD:
                phonebook.add();
                break;

            case phonebook.SEARCH:
                phonebook.search(input);
                break;

            case phonebook.EXIT:
                phonebook.exit();
                return 0;

            default:
            std::cout << "Invalid command, enter new one!" << std::endl;
        }
    }
}