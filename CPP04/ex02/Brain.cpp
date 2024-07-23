/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:30:28 by kaan              #+#    #+#             */
/*   Updated: 2024/07/23 20:59:21 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain construced\n";
}

Brain::Brain(const Brain &original) {
    std::cout << "Brain copy construced\n";
    *this = original;
}

Brain::~Brain() {
    std::cout << "Brain destroyed\n";
}

Brain &Brain::operator=(const Brain &original) {
    std::cout << "Brain copy construced\n";
    std::copy(original._ideas, original._ideas + 100, this->_ideas);
    return *this;
}
