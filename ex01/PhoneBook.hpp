/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:29:01 by escudo5           #+#    #+#             */
/*   Updated: 2025/08/12 13:46:14 by smarquez         ###   ########.fr       */
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






