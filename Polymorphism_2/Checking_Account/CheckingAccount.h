#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "../Base_Account/account.h"
#include "iostream"
class CheckingAccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &rhs);

private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_feeRate = 1.5;
    static constexpr double def_balance = 0.0;

protected:
    double feeRate;

public:
    CheckingAccount(std::string name = def_name, double balance = def_balance, double feeRate = def_feeRate);
    bool withDraw(double amount);
    ~CheckingAccount();
};

#endif