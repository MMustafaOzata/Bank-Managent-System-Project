#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "account.h"

class CheckingAccount : public Account {
private:
    double balance;
    double overdraftLimit;

public:
    CheckingAccount(double initialBalance, double overdraftLimit);
    void deposit(double amount) override;
    void withdraw(double amount) override;
    double getBalance() const override;
    std::string getAccountType() const override;
};

#endif 
