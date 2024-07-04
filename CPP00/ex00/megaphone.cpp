/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:20:20 by kaan              #+#    #+#             */
/*   Updated: 2024/07/03 18:18:44 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    std::string no_av = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (ac < 2)
        std::cout << no_av;
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            std::cout << char(toupper(av[i][j]));
        }
        std::cout << " ";
    }
    std::cout << "\n";
}