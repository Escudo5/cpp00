/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:18:34 by escudo5           #+#    #+#             */
/*   Updated: 2025/07/29 11:22:11 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc)    
    {
        while (argv[i][j] != '\0')
        {
            std::cout << (char)std::toupper(argv[i][j]);
            j++;
        }
        j = 0;
        i++;
    }     
    std::cout << std::endl;
    return(0);
        
}