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

void BitcoinExchange::validateLine(std::string &line, char delim)
{
    std::pair<std::string, std::string> splitted = splitString(line, delim);
    if (splitted.first.empty() || splitted.second.empty())
        throw std::runtime_error("Empty line");
    std::string date = trim(splitted.first);
    std::string value = trim(splitted.second);

    if (!validateDate(date))
        throw std::runtime_error("Invalid Date Format");
    if (!validateValue(value))
        throw std::runtime_error("Invalid Value");

    this->_exchRates.insert(std::make_pair(date, strtof(value.c_str(), NULL)));
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

void BitcoinExchange::exchange_rate(std::ifstream &input)
{
    std::string line;
    bool firstLine = true;

    while (std::getline(input, line))
    {
        if (firstLine)
            firstLine = false;
        try
        {
            validateLine(line, '|');
            findSuitableValue(line);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what();
        }
    }
}

void BitcoinExchange::findSuitableValue(std::string &line)
{
    std::pair<std::string, std::string> dateValue = splitString(line, '|');
    std::string date = dateValue.first;
    float value = strtof((dateValue.second).c_str(), NULL);

    if (value > 1000)
        throw std::runtime_error("Error: Number too large");
    std::map<std::string, float>::iterator it = this->_exchRates.find(date);

    (void)it;
    std::cout << "Found it " << std::endl;
}