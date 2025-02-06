#include "Account.hpp"

Account::Account(int initial_deposit)
{
        this->_accountIndex = 0;
        this->_amount = 0;
        this->_nbDeposits = 0;
        this->_nbWithdrawals = 0;
        (void)initial_deposit;
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