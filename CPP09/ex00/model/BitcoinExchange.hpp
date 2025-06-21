#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <algorithm>
#include <fstream>
#include <map>
#include <string>

class BitcoinExchange
{
  private:
    std::map<std::string, float> _ExchanegRates;
    BitcoinExchange();

  public:
    BitcoinExchange(std::fstream inputFile);
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange &operator=(const BitcoinExchange &);
    ~BitcoinExchange();
};
#endif