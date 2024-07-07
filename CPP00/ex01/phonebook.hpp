/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:31:38 by kaan              #+#    #+#             */
/*   Updated: 2024/07/07 20:01:38 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        Contact     _contacts[8];
        int         index = 0;

    public:
        Phonebook() {}

        enum Command {
                        ADD,
                        SEARCH,
                        EXIT,
                        INVALID
        };

        Command getCommand(std::string input) {
            if (input == "ADD") {
                return ADD;
            }
            if (input == "SEARCH") {
                return SEARCH;
            }
            if (input == "EXIT") {
                return EXIT;
            }
            return INVALID;
        }

        void add() {
            std::cout << "Add new contact" << std::endl;
            _contacts[index].setFirstName();
            _contacts[index].setLastName();
            _contacts[index].setNickName();
            _contacts[index].setPhoneNumber();
            _contacts[index].setDarkestSecret();
            if (index != 7) {
                ++index;
                return;
            };
            if (index == 7) {
                index = 0;
            }
        }
        
        void search(std::string input) {
            bool found = false;

            std::cout << "Enter keyword:" << std::endl;
            std::cin >> input;
            for (int i = 0; i < 8; ++i) {
                if (input == _contacts[i].getFirstName()) {
                    _contacts[i].display();
                    found = true;
                    break;
                }
                if (input == _contacts[i].getLastName()) {
                    _contacts[i].display();
                    found = true;
                    break;
                }
                if (input == _contacts[i].getNickName()) {
                    _contacts[i].display();
                    found = true;
                    break;
                }
                if (input == _contacts[i].getPhoneNumber()) {
                    _contacts[i].display();
                    found = true;
                    break;
                }
                if (input == _contacts[i].getDarkestSecret()) {
                    _contacts[i].display();
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Person not found\n";
            }
        }
        
        void exit() {
        }

};

#endif
