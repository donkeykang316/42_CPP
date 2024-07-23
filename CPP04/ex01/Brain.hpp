/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:38:50 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 20:57:42 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {
private:

public:
    Brain();
    Brain(const Brain &original);
    ~Brain();

    Brain &operator=(const Brain &original);

    std::string _ideas[100];

    std::string getIdea(int i);
};

#endif