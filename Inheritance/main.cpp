#include <iostream>
#include <vector>

#include "Base_Account/account.h"
#include "Checking_Account/CheckingAccount.h"
#include "Saving_Accounts/savingAccount.h"
#include "Trust_Account/TrustAccount.h"
#include "Util/accountUtil.h"

#include "Base_Account/account.cpp"
#include "Checking_Account/CheckingAccount.cpp"
#include "Saving_Accounts/savingAccount.cpp"
#include "Trust_Account/TrustAccount.cpp"
#include "Util/accountUtil.cpp"

using namespace std;
int main(void)
{
    cout.precision(2);
    cout << fixed;
    vector<Account> accounts;

    accounts.push_back(Account{});
    accounts.push_back(Account{"larry"});
    accounts.push_back(Account{"Milad", 2000});
    accounts.push_back(Account{"Saeed", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    vector<SavingAccount> savingAccounts;

    savingAccounts.push_back(SavingAccount{});
    savingAccounts.push_back(SavingAccount{"larry"});
    savingAccounts.push_back(SavingAccount{"Milad", 2000});
    savingAccounts.push_back(SavingAccount{"Saeed", 5000});

    display(savingAccounts);
    deposit(savingAccounts, 1000);
    withdraw(savingAccounts, 2000);

    return 0;
}