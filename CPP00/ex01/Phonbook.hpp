/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonbook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:24:09 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/17 21:31:03 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "Phone.h"

class Phonbook
{
private:
        int number;
        std::string name;
public:
        Phonbook(int,std::string);
        Phonbook(void);
        void print();
        ~Phonbook();
};

void Phonbook::print()
{
        std::cout<<this->number<< this->name;
}
Phonbook::Phonbook(int num,std::string name){
        this->name = name;
        this->number = num;
}
Phonbook::Phonbook(void)
{
}

Phonbook::~Phonbook()
{
}

#endif