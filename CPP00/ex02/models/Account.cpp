#include "Account.hpp"
#include <ctime>
#include <iostream>
#define DAY_BUFFER 18

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
        std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawls" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
        (void)deposit;
}
bool Account::makeWithdrawal(int withdrawal)
{
        (void)withdrawal;
        return true;
}
int Account::checkAmount(void) const
{
        return 0;
}
void Account::displayStatus() const
{
}
void Account::_displayTimestamp()
// This function is a function that prints out the timestamp of the day,
//  if there is no system time, it will dispaly [N/A]
{
        std::time_t timeObj = time(NULL);
        char timelog[DAY_BUFFER];
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
        std::strftime(timelog, DAY_BUFFER, "[%Y%m%d_%H%M%S]", lt);
        std::cout << timelog;
}