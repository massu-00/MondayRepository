#pragma once
#include<string>
class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccountInfo() const;
};