/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:18:34 by escudo5           #+#    #+#             */
/*   Updated: 2025/07/27 14:58:59 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string argument = argv[i];
        for (int j = 0; j< argument.size(); ++j)
        {
            char character = argument[j];
            char upper = toupper(character);
            std::cout << upper;
        }
    }     
    std::cout << std::endl;
    return(0);
        
}