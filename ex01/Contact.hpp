/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:30:56 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/04/24 13:35:09 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
private:
	std::string     _fname;
	std::string     _lname;
	std::string     _nname;
	std::string     _secret;
	std::string     _PhoneNumber;

public:
	Contact(/* args */);
	~Contact();

	
	void    SetFname(std::string str);
	void    SetLname(std::string str);
	void    SetNname(std::string str);
	void    SetSecret(std::string str);
	void    SetPhone(std::string str);
	std::string GiveInfo(int i);

};
