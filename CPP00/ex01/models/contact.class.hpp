/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:02:12 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/31 10:47:33 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <phone.hpp>

class Contact
{

private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phoneNumber;

public:
        Contact();
        int setFirstName();
        int setLastName();
        int setNickName();
        int setDarkestSecret();
        int setPhonenumber();
        std::string     getFirstName();
        std::string     getLastName();
        std::string     getNickName();
        std::string     getDarkestSecret();
        std::string     getPhonenumber();
};

#endif