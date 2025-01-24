/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:51:23 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/24 20:26:16 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact()
{
        phoneNumber = 0;
}

void Contact::setFirstName(std::string name)
{
        this->firstName = name;
}

void Contact::setLastName(std::string name)
{
        this->lastName = name;
}
void Contact::setNickName(std::string name)
{
        this->nickName = name;
}
void Contact::setDarkestSecret(std::string secret)
{
        this->darkestSecret = secret;
}