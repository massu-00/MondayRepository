#include "Header.h"
#include <iostream>

BankAccount::BankAccount(const std::string& holder, double initialBalance)
    : accountHolder(holder), balance(initialBalance)
{
}

double BankAccount::getBalance() const
{
    return balance;
}

void BankAccount::deposit(double amount)
{
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited: " << amount << "\n";
    }
    else {
        std::cout << "Invalid deposit amount.\n";
    }
}

void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn: " << amount << "\n";
    }
    else {
        std::cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

void BankAccount::displayAccountInfo() const
{
    std::cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}