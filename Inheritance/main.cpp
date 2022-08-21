#include <iostream>
#include <vector>
#include "savingAccount.h"
#include "accountUtil.h"

#include "account.cpp"
#include "savingAccount.cpp"
#include "accountUtil.cpp"

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