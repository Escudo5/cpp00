/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:28:57 by escudo5           #+#    #+#             */
/*   Updated: 2025/07/30 17:26:40 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : total_contacts(0), oldest_contact(0) {}

void PhoneBook::add()
{
    Contact new_contact;

    std::string input;
    std::cout << "Insert new name: \n";
    std::getline(std::cin, input);
    new_contact.setName(input);
    
    std::cout << "Insert new last name: \n";
    std::getline(std::cin, input);
    new_contact.setLast(input);

    std::cout << "Insert nickname: \n";
    std::getline(std::cin, input);
    new_contact.setNick(input);

    std::cout << "Insert phone number: \n";
    std::getline(std::cin, input);
    new_contact.setPhone(input);

    std::cout << "Insert your darkest secret: \n";
    std::getline(std::cin, input);
    new_contact.setSecret(input);

    int pos;
    if (total_contacts < 8)
    {
        pos = total_contacts;
        total_contacts++;
    }
    else
    {
        pos = oldest_contact;
        oldest_contact = (oldest_contact + 1) % 8;
    }
    contacts[pos] = new_contact;
}


void PhoneBook::search()
{
    std::string input;
    std::cout << std::setw(10) << "Index" << "|"
          << std::setw(10) << "First Name" << "|"
          << std::setw(10) << "Last Name" << "|"
          << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < total_contacts; i++)
    {
        std::string name = contacts[i].getName();
        if (name.length() > 10)
            name = name.substr(0,9) + ".";
        std::cout << std::setw(10) << name << std::endl;
        
        std::string last = contacts[i].getLast();
        if (last.length() > 10)
            last = last.substr(0,9) + ".";
        std::cout << std::setw(10) << last << std::endl;

        std::string nick = contacts[i].getNick();
        if (nick.length() > 10)
            nick = nick.substr(0,9) + ".";
        std::cout << std::setw(10) << nick << std::endl;

    }
    std::setw(10);
    std::right;
    std::cout << "Select an index\n";
    std::getline(std::cin, input);
}


// imprimo la tabla con index, name, last name, nickname.
//despues en el bucle para cada llamada a mi clase contacto pido el nombre y lo trunco i es > 10
//lo imprimo y alinea a la derecha