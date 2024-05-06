/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:28:35 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:45 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
    std::cout << "--Welcome to CRAPPY--" << std::endl;
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Thank you for using CRAPPY." << std::endl;
}

void    PhoneBook::AddContact(void)
{
    std::string str;
    
    std::cout << "Please enter the first name:" << std::endl;
	std::getline(std::cin, str);
	while (str == "")
	{
		std::getline(std::cin, str);
	}
	// std::cin >> str;
    this->_contacts[this->_index].SetFname(str);
    
    std::cout << "Please enter the last name:" << std::endl;
    std::getline(std::cin, str);
    this->_contacts[this->_index].SetLname(str);
    
    std::cout << "Please enter the nickname:" << std::endl;
    std::getline(std::cin, str);
    this->_contacts[this->_index].SetNname(str);

    std::cout << "Please enter the darkest secret:" << std::endl;
    std::getline(std::cin, str);
    this->_contacts[this->_index].SetSecret(str);
    
    std::cout << "Please enter the phone number:" << std::endl;
    std::getline(std::cin, str);
    this->_contacts[this->_index].SetPhone(str);

	this->_index = (this->_index + 1) % 8;
}

void	PhoneBook::_ShowContact(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::string	str;
		for (int k = 0; k < 56; k++)
		{
			std::cout << "_";
		}
		std::cout << std::endl;
		std::cout << "|         " << i + 1 << "|";
		for (int j = 0; j < 4; j++)
		{
			str = this->_contacts[i].GiveInfo(j);
			if (str.length() < 10)
				str = str.insert(0, 10 - str.length(), ' ');
			else if (str.length() > 10)
				str = str.substr(0, 9) + '.';
			std::cout << str << "|";
		}
		std::cout << std::endl;
	}
	std::string	str;
	for (int i = 0; i < 56; i++)
	{
		std::cout << "_";
	}
	std::cout << std::endl;
	
}

void	PhoneBook::SearchContact(void)
{
	std::string	str;
	int			index = 0;
	
	this->_ShowContact();
	std::cout << "Please chose which contact you want to be displayed: ";
	if (!(std::cin >> index) ||  index > 8 || index < 1)
	{
		std::cin.clear();
		std::cout << "\nYou lost your chance of chosing right index." << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	index --;
	std::cout << "First Name: ";	
	std::cout << this->_contacts[index].GiveInfo(0) << std::endl;
	
	std::cout << "Last Name: ";	
	std::cout << this->_contacts[index].GiveInfo(1) << std::endl;
	
	std::cout << "Nick-Name: ";	
	std::cout << this->_contacts[index].GiveInfo(2) << std::endl;
	
	std::cout << "Darkest Secret: ";	
	std::cout << this->_contacts[index].GiveInfo(3) << std::endl;
	
	std::cout << "Phone Number: ";	
	std::cout << this->_contacts[index].GiveInfo(4) << "\n" << std::endl;
	
	
}
