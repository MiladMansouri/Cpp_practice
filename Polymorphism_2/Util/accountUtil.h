#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "../Saving_Accounts/savingAccount.h"
#include "../Base_Account/account.h"

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

void display(const std::vector<SavingAccount> &accounts);
void deposit(std::vector<SavingAccount> &accounts, double amount);
void withdraw(std::vector<SavingAccount> &accounts, double amount);
#endif