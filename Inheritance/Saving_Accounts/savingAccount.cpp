#include "savingAccount.h"

SavingAccount::SavingAccount(std::string name,
                             double balance, double intRate) : Account{name, balance}, intRate{intRate}
{
    std::cout << this << "Saving Account Constructor Called!" << std::endl;
}

SavingAccount::~SavingAccount()
{
    std::cout << this << "Saving Account destructor Called!" << std::endl;
}

bool SavingAccount::deposit(double amount)
{
    amount += amount * (this->intRate / 100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingAccount &account)
{
    os << "[Saving Account" << account.name << ":" << account.balance << "," << account.intRate << "]" << std::endl;
    return os;
}