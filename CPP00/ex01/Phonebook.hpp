/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:31:38 by kaan              #+#    #+#             */
/*   Updated: 2024/07/15 15:09:41 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
    private:
        Contact     _contacts[8];
        int         _index;

    public:
        Phonebook() : _index(0) {}

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
            if (_index != 8) {
                _contacts[_index].setIndex(_index);
                _contacts[_index].setFirstName();
                _contacts[_index].setLastName();
                _contacts[_index].setNickName();
                _contacts[_index].setPhoneNumber();
                _contacts[_index].setDarkestSecret();
                ++_index;
            }
            else {
                _contacts[0].setIndex(0);
                _contacts[0].setFirstName();
                _contacts[0].setLastName();
                _contacts[0].setNickName();
                _contacts[0].setPhoneNumber();
                _contacts[0].setDarkestSecret();
            }
        }
        
        std::string stringFormat(std::string String) {
            std::string modString;
    
            if (String.length() > 10) {
                modString = String.substr(0, 9) + ".";
            }
            else {
                modString = String;
            }
            return modString;
        }

        void search(std::string input) {
            bool found = false;

            std::cout <<"----------------Phone Contacts---------------" << std::endl;
            std::cout << std::right << std::setw(10) << "Index";
            std::cout << " | " << std::right << std::setw(10) << "First Name";
            std::cout << " | " << std::right << std::setw(10) << "Last Name";
            std::cout << " | " << std::right << std::setw(10) << "Nick Name" << std::endl;
            for (int i = 0; i < _index; ++i) {
                std::cout << std::right << std::setw(10) << _contacts[i].getIndex();
                std::cout << " | " << std::right << std::setw(10) << stringFormat(_contacts[i].getFirstName()) << std::flush;
                std::cout << " | " << std::right << std::setw(10) << stringFormat(_contacts[i].getLastName()) << std::flush;
                std::cout << " | " << std::right << std::setw(10) << stringFormat(_contacts[i].getNickName()) << std::endl;
            }
            std::cout << "\n";
            std::cout << "Enter index" << std::endl;
            std::cin >> input;
            for (int i = 0; i < 8; ++i) {
                if (_contacts[i].getFirstName().empty()) {
                    break;
                }
                if (input.length() > 1) {
                    std::cout << "Invalid Input\n\n";
                    return;
                }
                if ((input[0] - 48) == _contacts[i].getIndex()) {
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
