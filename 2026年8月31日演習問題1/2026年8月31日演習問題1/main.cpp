#include <iostream>
#include "Header.h"

int main()
{
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo();

    return 0;
}