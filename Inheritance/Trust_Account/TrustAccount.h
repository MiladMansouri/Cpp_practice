#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "../Saving_Accounts/savingAccount.h"
#include <iostream>
class TrustAccount : public SavingAccount
{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);

private:
    static constexpr const char *def_name = "Unnamed Thrust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_interstRate = 0.0;
    static constexpr double def_bonus = 50.0;
    static constexpr double def_DepositToGetBonus = 5000.0;
    static constexpr double def_maxWithThrow = 20.0;
    static constexpr double def_iniRate = 20.0;
    static constexpr int def_counterPerYear = 4;

protected:
    int counterPerYear;
    double interstRate;

public:
    TrustAccount(std::string name = def_name, double balance = def_balance, double iniRate = def_iniRate);
    ~TrustAccount();

    bool deposit(double amount);
    bool withDraw(double amount);
};

#endif