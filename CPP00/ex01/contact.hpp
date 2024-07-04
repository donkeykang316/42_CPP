/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:14:15 by kaan              #+#    #+#             */
/*   Updated: 2024/07/04 15:57:56 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class contact
{   
    private:
    std::string _firstname;
    std::string _lastname;
    std::string _phone_number;
    std::string _pet_name;
    int         index;

    public:
    std:: string getFirstName();
    void setFirstName();
    
};