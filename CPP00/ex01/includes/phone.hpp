/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:23:41 by abueskander       #+#    #+#             */
/*   Updated: 2025/02/04 12:46:00 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP

#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#define FAIL 1
#define SUCCESS 0

enum inputStates
{
        FIRSTNAME,
        LASTNAME,
        NICKNAME,
        SECERT
};

void check_eof();
int validateStringInput(std::string);
int validateNumberInput(std::string);
std::string stringTooLong(std::string str);

#endif