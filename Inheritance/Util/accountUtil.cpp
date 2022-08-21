
#include "accountUtil.h"
#include <iostream>

using namespace std;

void display(const std::vector<Account> &accounts)
{
    cout << "\n===========Accounts===========" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}
void deposit(std::vector<Account> &accounts, double amount)
{

    cout << "\n========= Depositing to Accounts =========" << endl;
    for (auto &acc : accounts)
    {

        if (acc.deposit(amount))
        {
            cout << "Deposited" << amount << "to" << acc << endl;
        }
        else
        {
            cout << "Failed Deposited of" << amount << "to" << acc << endl;
        }
    }
}
void withdraw(std::vector<Account> &accounts, double amount)
{
    cout << "\n========= Withdrawing From Accounts =========" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withDraw(amount))
        {
            cout << "WithDrawing" << amount << "From" << acc << endl;
        }
        else
        {
            cout << "Failed WithDrawing of" << amount << "From" << acc << endl;
        }
    }
}

void display(const std::vector<SavingAccount> &accounts)
{
    cout << "\n===========Accounts===========" << endl;
    for (const auto &acc : accounts)
    {
        cout << acc << endl;
    }
}
void deposit(std::vector<SavingAccount> &accounts, double amount)
{

    cout << "\n========= Depositing to Accounts =========" << endl;
    for (auto &acc : accounts)
    {

        if (acc.deposit(amount))
        {
            cout << "Deposited" << amount << "to" << acc << endl;
        }
        else
        {
            cout << "Failed Deposited of" << amount << "to" << acc << endl;
        }
    }
}
void withdraw(std::vector<SavingAccount> &accounts, double amount)
{
    cout << "\n========= Withdrawing From Accounts =========" << endl;
    for (auto &acc : accounts)
    {
        if (acc.withDraw(amount))
        {
            cout << "WithDrawing" << amount << "From" << acc << endl;
        }
        else
        {
            cout << "Failed WithDrawing of" << amount << "From" << acc << endl;
        }
    }
}