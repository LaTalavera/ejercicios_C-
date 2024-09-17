#include "Bank.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string accountNumber, float balance)
{
    this->accountNumber = accountNumber;
    this->balance = balance;
}

void BankAccount::deposit(int amount)
{
    this->balance += amount;
}

void BankAccount::withdraw(int amount)
{
    if (amount < this->balance)
    {
        this->balance -= amount;
    }
    else
    {
        cout << "Insuficient balance" << endl;
    }
}

void BankAccount::deposit(float amount)
{
    this->balance += amount;
}

void BankAccount::showBankAccountDetails()
{
    cout << "Account Number: " << this->accountNumber << endl;
    cout << "Account balance: " << this->balance << endl;
}