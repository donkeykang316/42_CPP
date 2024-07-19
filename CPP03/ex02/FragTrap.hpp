/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:33:51 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 18:39:08 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(FragTrap &original);
    ~FragTrap();

    FragTrap &operator=(FragTrap &original);

    FragTrap(std::string name);

    void highFivesGuys(void);
};

#endif