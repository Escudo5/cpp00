/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:52:07 by escudo5           #+#    #+#             */
/*   Updated: 2025/07/29 12:27:10 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};
Contact::~Contact(){};

void Contact::setName(const std::string &name)
{
    first_name = name;
}

void Contact::setLast (const std::string &last)
{
    last_name = last;
}

void Contact::setNick(const std::string &nick)
{
    nickname = nick;
}

void Contact::setPhone(const std::string &phone)
{
    phone_number = phone;
}

void Contact::setSecret(const std::string &secret)
{
    darkest_secret = secret;
}

std::string Contact::getName() const
{
    return(first_name);
}

std::string Contact::getLast() const
{
    return(last_name);
}

std::string Contact::getNick() const
{
    return(nickname);
}

std::string Contact::getPhone() const
{
    return(phone_number);
}

std::string Contact::getSecret() const
{
    return(darkest_secret);
}