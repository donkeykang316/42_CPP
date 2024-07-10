/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:31:38 by kaan              #+#    #+#             */
/*   Updated: 2024/07/10 16:23:44 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        Contact     _contacts[8];
        int         _index = 0;

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
            _contacts[_index].setFirstName();
            _contacts[_index].setLastName();
            _contacts[_index].setNickName();
            _contacts[_index].setPhoneNumber();
            _contacts[_index].setDarkestSecret();
            if (_index != 7) {
                ++_index;
                return;
            };
            if (_index == 7) {
                _index = 0;
            }
        }
        
        void search(std::string input) {
            bool found = false;

            std::cout <<"-------Phone Contacts-------" << std::endl;
            std::cout << "   Index | FirstName | LastName | NickName" << std::endl;
            std::cout << std::right << std::setw(10) << "Index |";
            std::cout << std::right << std::setw(10) << "First Name |";
            std::cout << std::right << std::setw(10) << "Last Name |";
            std::cout << std::right << std::setw(10) << "Nick Name" << std::endl;
            for (int i = 0; i < _index; ++i) {
                std::cout << std::right << std::setw(10) << i << " |";
                std::cout << std::right << std::setw(10) << _contacts[i].getFirstName() << " |";
                std::cout << std::right << std::setw(10) << _contacts[i].getLastName() << " |";
                std::cout << std::right << std::setw(10) << _contacts[i].getNickName() << " |" << std::endl;
            }
            std::cout << "\n";
            std::cout << "Enter keyword" << std::endl;
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
