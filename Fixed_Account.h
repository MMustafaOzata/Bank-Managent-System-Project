#ifndef FIXED_ACCOUNT_H
#define FIXED_ACCOUNT_H

#include "account.h"

class FixedAccount : public Account {
private:
    double balance;
    double interestRate;
    int tenure;

public:
    FixedAccount(double initialBalance, double interestRate, int tenure);
    void deposit(double amount) override;
    void withdraw(double amount) override;
    double getBalance() const override;
    std::string getAccountType() const override;
};

#endif 
