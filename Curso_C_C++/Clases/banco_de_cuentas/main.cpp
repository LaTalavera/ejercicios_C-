/*
Conceptos: Clases, encapsulamiento, métodos, sobrecarga de métodos.

Descripción: Crea una clase CuentaBancaria con atributos como número de cuenta y saldo. 
Implementa métodos para depositar y retirar dinero, asegurándote de que no se pueda retirar más dinero del que hay en la cuenta. 
Sobrecarga el método depositar para aceptar diferentes tipos de datos.

Instrucciones:

Define la clase CuentaBancaria con atributos numero_cuenta y saldo.
Implementa métodos depositar y retirar.
Sobrecarga el método depositar para aceptar tanto float como int.
Implementa un método para mostrar los detalles de la cuenta.
*/
#include "Bank.h"

int main()
{
    BankAccount *my_account = new BankAccount("123456", 1500);

    my_account->showBankAccountDetails();
    my_account->deposit(1000);
    my_account->showBankAccountDetails();
    my_account->withdraw(200);
    my_account->showBankAccountDetails();
    my_account->deposit(5.5f);
    my_account->showBankAccountDetails();

    return 0;
}