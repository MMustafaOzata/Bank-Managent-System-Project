#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
class Account {
public:
    virtual ~Account() {}
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double getBalance() const = 0;
    virtual std::string getAccountType() const = 0;
};

#endif 
