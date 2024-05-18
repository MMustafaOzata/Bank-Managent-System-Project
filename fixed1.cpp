#include "fixed_account.h"

FixedAccount::FixedAccount(double initialBalance, double interestRate, int tenure)
    : balance(initialBalance), interestRate(interestRate), tenure(tenure) {}

void FixedAccount::deposit(double amount) {
    balance += amount;
}

void FixedAccount::withdraw(double amount) {
    
    if (amount <= balance) {
        balance -= amount;
    }
    else {
        
    }
}

double FixedAccount::getBalance() const {
    return balance;
}

std::string FixedAccount::getAccountType() const {
    return "Fixed Account";
}
