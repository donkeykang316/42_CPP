/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:59:58 by kaan              #+#    #+#             */
/*   Updated: 2024/07/19 18:28:25 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
private:
    bool _gateMode;

public:
    ScavTrap();
    ScavTrap(ScavTrap& trapCopy);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap& trapCopy);

    ScavTrap(std::string name);

    void guardGate();
};

#endif