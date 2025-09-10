/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:27:23 by escudo5           #+#    #+#             */
/*   Updated: 2025/09/10 16:48:47 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string line;

    while (true)
    {
        std::cout  << "Type ADD, SEARCH or EXIT: " << std::endl;
        std::getline(std::cin, line);
        
        if(std::cin.eof())
            exit (1);
        if (line.compare("ADD") == 0)
            phoneBook.add();
        else if (line.compare("SEARCH") == 0)
            phoneBook.search();
        else if (line.compare("EXIT") == 0)
        {
            std::cout << "closing program ..." << std::endl;
            break;   
        }
    }
    return(0);
}