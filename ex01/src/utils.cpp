/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:44:56 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 16:46:16 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phone.hpp>

void check_eof()
{
        if (std::cin.eof())
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
                if (!isalpha(str[i]) && str[i] != ' ')
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