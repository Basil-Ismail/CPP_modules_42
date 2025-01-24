/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonbook.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:24:09 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/24 19:55:23 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "phone.h"

class PhoneBook
{
        private:
                std::string contacts[8];
                int     numberSaved;
        public:
                PhoneBook();
        int    add();
        int    search();
        int    exit();

};




#endif