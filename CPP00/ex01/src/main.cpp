/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:09:01 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 08:45:16 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phone.h>
#include <phonebook.class.hpp>

int main(void)
{
        PhoneBook phoneBook;
        std::string input;

        std::cout << "Welcome To PhoneBook " << std::endl;
        while (1)
        {
                std::getline(std::cin, input);
                check_eof();
                if (phoneBook.inputSwitch(input))
                {
                        std::cerr << "No Operation with such name!" << std::endl;
                }
        }
}
