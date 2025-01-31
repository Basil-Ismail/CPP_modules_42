/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:24:09 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/31 17:01:44 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "phone.hpp"
#include "contact.class.hpp"
class PhoneBook
{
private:
        Contact contacts[8];
        int numberSaved;
        void displayColumn(int);

public:
        PhoneBook();
        int add();
        int search();
        int exit();
        int inputSwitch(std::string);
};

#endif