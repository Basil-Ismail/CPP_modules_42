/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:44:56 by abueskander       #+#    #+#             */
/*   Updated: 2025/02/04 15:07:17 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phone.hpp>

void check_eof()
{
        if (std::cin.eof() || std::cin.bad())
        {
                std::cout << "Good Bye! <3" << std::endl;
                exit(1);
        }
}
int validateStringInput(std::string str)
{
        if (str.length() == 0)
                return FAIL;
        for (size_t i = 0; i < str.length(); i++)
        {
                if (!isalpha(str[i]))
                        return FAIL;
        }
        return SUCCESS;
}
int validateNumberInput(std::string str)
{
        if (str.length() == 0)
                return FAIL;
        for (size_t i = 0; i < str.length(); i++)
        {
                if (!isdigit(str[i]))
                        return FAIL;
        }
        return SUCCESS;
}
std::string stringTooLong(std::string str)
{
        if (str.length() > 10)
        {
                str.replace(9, 1, ".");
                str.erase(10, str.length() - 10);
        }
        return (str);
}