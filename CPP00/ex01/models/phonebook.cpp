/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:20 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 08:46:02 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook()
{
        numberSaved = 0;
}
int PhoneBook::inputSwitch(std::string inputStr)
{
        if (inputStr == "ADD")
                this->add();
        else if (inputStr == "SEARCH")
                this->search();
        else if (inputStr == "EXIT")
                this->exit();
        else
                return (1);
        return (0);
}
int PhoneBook::add()
{
        std::string inputName;
        bool flags[4] = {false, false, false, false};

        while (1)
        {
                std::cout << "Enter First Name : ";
                std::getline(std::cin, inputName);
                check_eof();
                if (!flags[FIRSTNAME] && this->contacts[this->numberSaved % 8].setFirstName(inputName))
                {
                        std::cout << "Not Valid Input" << std::endl;
                        continue;
                }
                else
                        break;
        }

        return 0;
}
int PhoneBook::search()
{
        std::cout << "Enter First Name";
        return 0;
}
int PhoneBook::exit()
{
        std::cout << "Enter First Name";
        return 0;
}