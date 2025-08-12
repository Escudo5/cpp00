/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:45:38 by escudo5           #+#    #+#             */
/*   Updated: 2025/08/12 13:44:43 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <iomanip>

class Contact
{
    public:
        Contact();
        ~Contact();
        
        void setName(const std::string &name);
        void setLast(const std::string &last);
        void setNick(const std::string &nick);
        void setPhone(const std::string &phone);
        void setSecret(const std::string &secret);

        std::string getName() const;
        std::string getLast() const;
        std::string getNick() const;
        std::string getPhone() const;
        std::string getSecret() const;
    protected:
    /* */
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    
};


#endif