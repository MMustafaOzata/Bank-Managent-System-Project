#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "account.h"

class SavingsAccount : public Account {
private:
    double balance;

public:
    SavingsAccount(double initialBalance);
    void deposit(double amount) override;
    void withdraw(double amount) override;
    double getBalance() const override;
    std::string getAccountType() const override;
};

#endif 
