
#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "../Base_Account/account.h"
#include "iostream"
class SavingAccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const SavingAccount &account);

private:
    static constexpr const char *def_name = "Unnamed Saving Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

protected:
    double intRate;

public:
    SavingAccount(std::string name = def_name,
                  double balance = def_balance, double intRate = def_int_rate);
    ~SavingAccount();
    bool deposit(double amount);
};

#endif