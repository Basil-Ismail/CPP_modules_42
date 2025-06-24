#include <BitcoinExchange.hpp>
#include <utils.hpp>

BitcoinExchange::BitcoinExchange(std::ifstream &fileBuffer)
{
    std::string line;
    while (std::getline(fileBuffer, line))
    {
        if (!validateLine(line))
            throw std::runtime_error("Invalid line: Line doesn't meet the standard");
    }
}

bool BitcoinExchange::validateLine(std::string &line)
{
    std::pair<std::string, std::string> splitted = splitString(line, '|');
    if (splitted.first.empty() || splitted.second.empty())
        return false;
    if (!validateDate(splitted.first))
        return false;
    if (!validateValue(splitted.second))
        return false;
}

bool BitcoinExchange::validateDate(std::string &date)
{
    std::pair<std::string, std::string> SplitOne = splitString(date, '-');
    std::pair<std::string, std::string> SplitTwo = splitString(SplitOne.second, '-');

    if (!SplitOne.first.empty() || !SplitOne.second.empty())
        return false;
    if (!SplitTwo.first.empty() || !SplitTwo.second.empty())
        return false;

    if (yearCheck(SplitOne.first) || monthCheck(SplitTwo.first) || dayCheck(SplitTwo.second))
        return false;
}

bool BitcoinExchange::validateValue(std::string &value)
{
    return false;
}