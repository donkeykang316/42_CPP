/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:30:28 by kaan              #+#    #+#             */
/*   Updated: 2024/07/20 18:57:43 by kaan             ###   ########.fr       */
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
    for (int i = 0; i != 100; ++i) {
        this->_ideas[i] = original._ideas[i];
    }
    return *this;
}

void Brain::setIdea(std::string idea, int i) {
    this->_ideas[i] = idea;
}

std::string Brain::getIdea(int i) {
    return _ideas[i];
}