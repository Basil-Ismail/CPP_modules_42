/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:24:09 by abueskander       #+#    #+#             */
/*   Updated: 2025/02/04 15:26:29 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "contact.class.hpp"
#include <phone.hpp>
class PhoneBook
{
private:
        Contact contacts[8];
        int numberSaved;
        void displayColumn(std::string);
        void displayRow(int);
        void displaySingleContact();

public:
        PhoneBook();
        void add();
        void search();
        void exit();
        int inputSwitch(std::string);
};

#endif