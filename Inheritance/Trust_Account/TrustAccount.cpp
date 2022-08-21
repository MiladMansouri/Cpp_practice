#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double iniRate) : SavingAccount{name, balance, iniRate}, counterPerYear{0}
{
}

TrustAccount::~TrustAccount()
{
}

bool TrustAccount::deposit(double amount)
{
    if (amount >= def_DepositToGetBonus)
    {
        amount = amount + def_bonus;
        return SavingAccount::deposit(amount);
    }
    else
    {
        return SavingAccount::deposit(amount);
    }
}
bool TrustAccount::withDraw(double amount)
{
    if (counterPerYear < def_counterPerYear)
    {
        if (amount <= ((def_maxWithThrow * SavingAccount::balance) / 100))
        {
            if (SavingAccount::withDraw(amount))
            {
                counterPerYear++;
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            std::cout << "Thrust Account " << SavingAccount::name << "Maximium Value withDraw" << endl;
            return false;
        }
    }
    else
    {
        std::cout << "Thrust Account " << SavingAccount::name << "Reach Maximium of withDraw Per Year" << endl;
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const TrustAccount &account)
{
    os << "[Thrusted Account" << account.name << ":" << account.balance << ","
       << "]" << std::endl;
    return os;
}