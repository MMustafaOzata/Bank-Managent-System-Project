#include "savings_account.h"

SavingsAccount::SavingsAccount(double initialBalance) : balance(initialBalance) {}

void SavingsAccount::deposit(double amount) {
    balance += amount;
}

void SavingsAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    }
    else {
        
    }
}

double SavingsAccount::getBalance() const {
    return balance;
}

std::string SavingsAccount::getAccountType() const {
    return "Savings Account";
}
