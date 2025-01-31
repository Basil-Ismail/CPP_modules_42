/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:20 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/31 17:10:06 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook()
{
	this->numberSaved = 0;
}
void PhoneBook::displayColumn(int index)
{
	if (index > this->numberSaved)
		return;
	for (size_t i = 0; i < 9; i++)
		std::cout << " ";
	std::cout << index;
	std::cout << "|";
	for (size_t i = 0; i < 10 - this->contacts[index].getFirstName().length(); i++)
		std::cout << " ";
	std::cout << this->contacts[index].getFirstName();
	std::cout << "|";
	for (size_t i = 0; i < 10 - this->contacts[index].getLastName().length(); i++)
		std::cout << " ";
	std::cout << this->contacts[index].getLastName();
	std::cout << "|";
	for (size_t i = 0; i < 10 - this->contacts[index].getNickName().length(); i++)
		std::cout << " ";
	std::cout << this->contacts[index].getNickName() << std::endl;
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
	// this->contacts[this->numberSaved % 8].setPhonenumber();
	// this->contacts[this->numberSaved % 8].setDarkestSecret();
	this->numberSaved++;

	return 0;
}
int PhoneBook::search()
{
	size_t i = this->numberSaved > 8 ? 8 : this->numberSaved;
	while (i--)
	{

		displayColumn(i);
	}
	return 0;
}
int PhoneBook::exit()
{

	return 0;
}