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
}