/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:23 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 08:40:15 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact()
{
        phoneNumber = 0;
}

int Contact::setFirstName(std::string name)
{
        if (name.length() == 0)
                return (FAIL);
        this->firstName = name;
        return 0;
}

int Contact::setLastName(std::string name)
{
        if (name.length() == 0)
                return (FAIL);
        this->lastName = name;
        return 1;
}
int Contact::setNickName(std::string name)
{
        if (name.length() == 0)
                return (FAIL);
        this->firstName = name;
        return 1;
}
int Contact::setDarkestSecret(std::string secret)
{
        if (secret.length() == 0)
                return (FAIL);
        this->darkestSecret = secret;
        return 1;
}