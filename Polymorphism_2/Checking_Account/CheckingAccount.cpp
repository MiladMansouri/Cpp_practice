#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance, double feeRate)
    : Account(name, balance), feeRate{feeRate}
{
    std::cout << this << "Checking Account Constructor Called!" << std::endl;
}

CheckingAccount::~CheckingAccount()
{
    std::cout << this << "Checking Account destructor Called!" << std::endl;
}

bool CheckingAccount::withDraw(double amount)
{
    amount = amount + feeRate;
    return Account::withDraw(amount);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account)
{
    os << "[Checking Account" << account.name << ":" << account.balance << "," << account.feeRate << "]" << std::endl;
    return os;
}