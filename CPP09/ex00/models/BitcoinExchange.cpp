#include <BitcoinExchange.hpp>
#include <iostream>
#include <utils.hpp>

BitcoinExchange::BitcoinExchange()
{
    std::ifstream _dataBase(DATA_CSV);
    std::pair<std::string, float> dataValue;
    std::string line;

    if (!_dataBase.is_open())
        throw std::runtime_error("Error: No data.csv found.");
    bool firstLine = true;
    while (std::getline(_dataBase, line))
    {
        if (firstLine)
            firstLine = false;
        else
        {
            dataValue = validateLine(line, ',');
            this->_exchRates.insert(dataValue);
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) : _exchRates(obj._exchRates)
{
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    this->_exchRates = obj._exchRates;
    return *this;
}
BitcoinExchange::~BitcoinExchange()
{
}

std::pair<std::string, float> BitcoinExchange::validateLine(std::string &line, char delim)
{
    std::pair<std::string, std::string> splitted = splitString(line, delim);
    if (splitted.first.empty() || splitted.second.empty())
        throw std::runtime_error("Error: bad input");
    std::string date = trim(splitted.first);
    std::string value = trim(splitted.second);

    if (!validateDate(date))
        throw std::runtime_error("Error: Invalid Date Format");
    if (!validateValue(value))
        throw std::runtime_error("Error: Invalid Value");

    return std::make_pair(date, strtof(value.c_str(), NULL));
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
        {
            firstLine = false;
            continue;
        }
        try
        {
            std::pair<std::string, float> dateValue = validateLine(line, '|');
            float vals = findSuitableValue(dateValue);
            std::cout << dateValue.first << " => " << dateValue.second << " = " << vals << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

float BitcoinExchange::findSuitableValue(std::pair<std::string, float> &dateValue)
{
    if (dateValue.second > 1000)
        throw std::runtime_error("Error: Number too large");

    std::map<std::string, float>::iterator it = this->_exchRates.find(dateValue.first);

    if (it != this->_exchRates.end())
        return (dateValue.second * it->second);
    else
    {
        it = this->_exchRates.lower_bound(dateValue.first);
        if (it == this->_exchRates.begin())
            throw std::runtime_error(" Error: date too early, no data available");
        --it;
        return (dateValue.second * it->second);
    }
}