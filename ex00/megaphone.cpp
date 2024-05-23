/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:51:35 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/23 09:08:21 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        // for (int i = 1; av[i]; i++)
        // {
        //     for (int j = 0; av[i][j]; j++)
        //     {
        //         std::cout << (char)toupper(av[i][j]);
        //     }
        //     std::cout << ' ';
        // }
        // std::cout << std::endl;
        
        for (int i = 1; i < ac; i++)
        {
            std::string arg(av[i]);
                        
            for (int j = 0; j < arg.length(); j++)
            {
                arg[j] =  std::toupper (static_cast<unsigned char> (arg[j]));
            }
            std::cout << arg << ' ';
        }
        std::cout << std::endl;
        
    }
}