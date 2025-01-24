/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:02:12 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/24 19:56:31 by abueskander      ###   ########.fr       */
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
        int     phoneNumber;
public:
        Contact();
        void    setFirstName(std::string);
        void    setLastName(std::string);
        void    setNickName(std::string);
        void    setDarkestSecret(std::string);
};




#endif