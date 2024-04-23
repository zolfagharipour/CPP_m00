/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:30:22 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/04/23 13:11:02 by mzolfagh         ###   ########.fr       */
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

void    Contact::SetLname(std::string str)
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
