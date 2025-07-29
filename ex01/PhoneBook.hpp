/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:29:01 by escudo5           #+#    #+#             */
/*   Updated: 2025/07/29 12:34:37 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>
# include <unistd.h>

class PhoneBook
{
    public: 
        PhoneBook();
        ~PhoneBook();
        
        void add();
        void search();

    private:
        Contact contacts[8];
        int total_contacts;
        int oldest_contact;
};

#endif