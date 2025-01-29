/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:02:12 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 08:24:36 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <phone.h>

class Contact
{

private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        int phoneNumber;

public:
        Contact();
        int setFirstName(std::string);
        int setLastName(std::string);
        int setNickName(std::string);
        int setDarkestSecret(std::string);
};

#endif