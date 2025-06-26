#include <BitcoinExchange.hpp>
#include <iostream>
#include <utils.hpp>
BitcoinExchange::BitcoinExchange()
{
    std::ifstream _dataBase(DATA_CSV);

    std::string line;
    bool firstLine = true;
    while (std::getline(_dataBase, line))
    {
        if (firstLine)
            firstLine = false;
        else
            validateLine(line, ',');
    }
    for (std::map<std::string, float>::const_iterator it = this->_ExchanegRates.begin();
         it != this->_ExchanegRates.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &)
{
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &)
{
    return *this;
}
BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::validateLine(std::string &line, char)
{
    std::pair<std::string, std::string> splitted = splitString(line, ',');
    if (splitted.first.empty() || splitted.second.empty())
        throw std::runtime_error("Empty line");
    std::string date = trim(splitted.first);
    std::string value = trim(splitted.second);

    if (!validateDate(date))
        throw std::runtime_error("Invalid Date Format");
    if (!validateValue(value))
        throw std::runtime_error("Invalid Value");

    this->_ExchanegRates.insert(std::make_pair(date, strtof(value.c_str(), NULL)));
}

bool BitcoinExchange::validateDate(std::string &date)
{
    std::pair<std::string, std::string> SplitOne = splitString(date, '-');
    std::pair<std::string, std::string> SplitTwo = splitString(SplitOne.second, '-');

    if (SplitOne.first.empty() || SplitOne.second.empty())
        return false;
    if (SplitTwo.first.empty() || SplitTwo.second.empty())
        return false;
    if (yearCheck(SplitOne.first) || monthCheck(SplitTwo.first) ||
        dayCheck(SplitTwo.second, atoi(SplitTwo.first.c_str()), atoi(SplitTwo.second.c_str())))
        return false;
    return true;
}

bool BitcoinExchange::validateValue(std::string &value)
{
    char *endptr;
    float intVal = strtof(value.c_str(), &endptr);

    if (*endptr)
        return false;
    if (intVal < 0)
        return false;

    return true;
}