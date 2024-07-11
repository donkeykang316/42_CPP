/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaan <kaan@student.42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:49:15 by kaan              #+#    #+#             */
/*   Updated: 2024/07/11 15:44:03 by kaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    File file;
    

    if (ac != 4) {
        std::cout << "Invalid input, three parameter needed: filename, string1 and string2\n";
        return EXIT_FAILURE;
    }
    file.replace(av[1], av[2], av[3]);
}