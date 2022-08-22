#include "account.h"
#include <iostream>
Account::Account(std::string name, double balance) : name{name},
                                                     balance{balance}
{
    std::cout << this << "Account Constructor Called!" << std::endl;
}

Account::~Account()
{
    std::cout << this << "Account destructor Called!" << std::endl;
}

bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        return false;
    }
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withDraw(double amount)
{
    if ((this->balance - amount) >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

double Account::getBalance() const
{
    return this->balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "[Account" << account.name << ":" << account.balance << "]" << std::endl;
    return os;
}