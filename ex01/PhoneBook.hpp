/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:28:32 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/04/23 17:47:59 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
private:
    int     _index;
    Contact _contact[8];
public:
    PhoneBook(/* args */);
    ~PhoneBook();

    void    AddContact(void);
    void    search();
};
