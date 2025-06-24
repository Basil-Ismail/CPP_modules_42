#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <algorithm>
#include <fstream>
#include <map>
#include <string>

#define DATA_CSV "data.csv"

class BitcoinExchange
{
  private:
    std::map<std::string, float> _ExchanegRates;
    BitcoinExchange();
    void validateLine(std::string &);
    bool validateDate(std::string &);
    bool validateValue(std::string &);

  public:
    BitcoinExchange(std::ifstream &fileBuffer);
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange &operator=(const BitcoinExchange &);
    ~BitcoinExchange();
};
#endif