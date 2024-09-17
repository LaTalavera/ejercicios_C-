#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    float balance;

public:
    BankAccount() = default;
    BankAccount(string accountNumber, float balance);
    void deposit(int amount);
    void withdraw(int amount);
    void deposit(float amount); // Sobrecarga el método depositar para aceptar tanto float como int.
    void showBankAccountDetails();
};