#include "Account.hpp"

Account::Account(int initial_deposit)
{
        (void)initial_deposit;
}
Account::~Account()
{
}
int Account::getNbAccounts()
{
        return 0;
}

int Account::getTotalAmount()
{
        return 0;
}
int Account::getNbWithdrawals()
{
        return 0;
}
void Account::displayAccountsInfos()
{
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
{
}