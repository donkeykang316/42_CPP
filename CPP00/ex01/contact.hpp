/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:14:15 by kaan              #+#    #+#             */
/*   Updated: 2024/07/10 16:26:52 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{   
    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;

    public:
    Contact() {}

    bool input_digit(std::string string) {
        for (char c : string) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    }

    bool input_alph(std::string string) {
        for (char c : string) {
            if (!isalpha(c)) {
                return false;
            }
        }
        return true;
    }

    void setFirstName() {
        do {
            std::cout << "Enter first name: ";
            getline(std::cin, _firstName);
            if (_firstName.empty()) {
                std::cout << "Input shall not be empty\n";
            }
            if (!input_alph(_firstName)) {
                std::cout << "Input must be alphabet\n";
            }
        } while (!input_alph(_firstName) || _firstName.empty());
    }

    void setLastName() {
        do {
            std::cout << "Enter last name: ";
            getline(std::cin, _lastName);
            if (!input_alph(_lastName)) {
                std::cout << "Input must be alphabet\n";
            }
        } while (!input_alph(_lastName));
    }

    void setNickName() {
            std::cout << "Enter nickname: ";
            getline(std::cin, _nickName);
    }

    void setPhoneNumber() {
        do {
            std::cout << "Enter phone number: ";
            getline(std::cin, _phoneNumber);
            if (_phoneNumber.empty()) {
                std::cout << "Input shall not be empty\n";
            }
            if (!input_digit(_phoneNumber)) {
            std::cout << "Input must be number\n";
            }
        } while (!input_digit(_phoneNumber) || _phoneNumber.empty());
        
    }
    
    void setDarkestSecret() {
        std::cout << "Enter darkest secret: ";
        getline(std::cin, _darkestSecret);
    }

    void display() {
        std::cout << "First Name: " << _firstName << std::endl;
        std::cout << "Last Name: " << _lastName << std::endl;
        std::cout << "Nickname: " << _nickName << std::endl;
        std::cout << "Phone Number: " << _phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << _darkestSecret << std::endl; 
        std::cout << "\n";
    }

    std::string getFirstName() {
        return _firstName;
    }

    std::string getLastName() {
        return _lastName;
    }

    std::string getNickName() {
        return _nickName;
    }

    std::string getPhoneNumber() {
        return _phoneNumber;
    }

    std::string getDarkestSecret() {
        return _darkestSecret;
    }
};

#endif