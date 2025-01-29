/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:20 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 16:45:24 by abueskander      ###   ########.fr       */
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

        this->contacts[this->numberSaved % 8].setFirstName();
        this->contacts[this->numberSaved % 8].setLastName();
        this->contacts[this->numberSaved % 8].setNickName();
        this->contacts[this->numberSaved % 8].setPhonenumber();
        this->contacts[this->numberSaved % 8].setDarkestSecret();
        this->numberSaved++;

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