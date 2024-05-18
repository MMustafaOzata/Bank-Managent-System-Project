#include "checking_account.h"

CheckingAccount::CheckingAccount(double initialBalance, double overdraftLimit)
    : balance(initialBalance), overdraftLimit(overdraftLimit) {}

void CheckingAccount::deposit(double amount) {
    balance += amount;
}

void CheckingAccount::withdraw(double amount) {
    if (amount <= balance + overdraftLimit) {
        balance -= amount;
    }
    else {
        
    }
}

double CheckingAccount::getBalance() const {
    return balance;
}

std::string CheckingAccount::getAccountType() const {
    return "Checking Account";
}
