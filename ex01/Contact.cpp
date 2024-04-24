/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:30:22 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/04/24 18:16:39 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
    
}

Contact::~Contact()
{
    
}

void    Contact::SetFname(std::string str)
{
    this->_fname = str;
}

void    Contact::SetLname(std::string str)
{
    this->_lname = str;
}

void    Contact::SetNname(std::string str)
{
    this->_nname = str;
}

void    Contact::SetSecret(std::string str)
{
    this->_secret = str;
}

void    Contact::SetPhone(std::string str)
{
    this->_PhoneNumber = str;
}
std::string Contact::GiveInfo(int i)
{
    switch(i)
    {
        case 0:
            return (this->_fname);
        case 1:
            return (this->_lname);
        case 2:
            return (this->_nname);
        case 3:
            return (this->_PhoneNumber);
        case 4:
            return (this->_secret);
    }
    return (NULL);
}