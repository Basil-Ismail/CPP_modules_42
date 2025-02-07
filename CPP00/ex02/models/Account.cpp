#include "Account.hpp"
#include <ctime>
#include <iostream>
#define TIME_BUFFER 19

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account::Account(int initial_deposit)
{
        _displayTimestamp();
        _accountIndex = _nbAccounts++;
        std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
        _totalAmount += initial_deposit;
        _amount = initial_deposit;
}
Account::~Account()
{
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
int Account::getNbAccounts()
{
        return (_nbAccounts);
}

int Account::getTotalAmount()
{
        return (_totalAmount);
}
int Account::getNbWithdrawals()
{
        return (_totalNbWithdrawals);
}
int Account::getNbDeposits()
{
        return (_totalNbDeposits);
}
void Account::displayAccountsInfos()
{
        _displayTimestamp();
        std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawls:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
        _displayTimestamp();
        _amount += deposit;
        _totalAmount += deposit;
        _nbDeposits++;
        _totalNbDeposits++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
        if (_amount < withdrawal)
        {
                std::cout << "refused" << std::endl;
                return false;
        }
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
        std::cout << std::endl;
        return true;
}
int Account::checkAmount(void) const
{
        return this->_amount;
}
void Account::displayStatus() const
{
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
}
void Account::_displayTimestamp()
// This function is a function that prints out the timestamp of the day,
//  if there is no system time, it will dispaly [N/A]
{
        std::time_t timeObj = time(NULL);
        char timelog[TIME_BUFFER];
        struct std::tm *lt;

        if (timeObj == -1)
        {
                std::cout << "[N/A]" << std::endl;
                return;
        }
        lt = std::localtime(&timeObj);
        if (!lt)
        {
                std::cout << "[N/A]" << std::endl;
                return;
        }
        std::strftime(timelog, TIME_BUFFER, "[%Y%m%d_%H%M%S] ", lt);
        std::cout << timelog;
}