#include "savings_account.h"
#include "checking_account.h"
#include "fixed_account.h"
#include <iostream>
using namespace std;

int main() {
    // Serkan Caliskan için hesaplar
    SavingsAccount* savingsAccountSerkan = new SavingsAccount(1000.0);
    CheckingAccount* checkingAccountSerkan = new CheckingAccount(500.0, 1000.0);
    FixedAccount* fixedAccountSerkan = new FixedAccount(5000.0, 0.08, 12);

    cout << "Serkan Caliskan's account operations" << endl;

    cout << "Enter the amount to deposit in savings account: ";
    double amount;
    cin >> amount;
    savingsAccountSerkan->deposit(amount);

    cout << "Enter the amount to withdraw from checking account: ";
    cin >> amount;
    checkingAccountSerkan->withdraw(amount);

    cout << "Account details:" << endl;
    cout << "Name: Serkan Caliskan" << endl;
    cout << "Type: " << savingsAccountSerkan->getAccountType() << endl;
    cout << "Balance: " << savingsAccountSerkan->getBalance() << endl;

    cout << "Enter the amount to deposit in fixed account: ";
    cin >> amount;
    fixedAccountSerkan->deposit(amount);

    cout << "Account details: " << endl;
    cout << "Name: Serkan Caliskan" << endl;
    cout << "Type: " << fixedAccountSerkan->getAccountType() << endl;
    cout << "Balance: " << fixedAccountSerkan->getBalance() << endl;

    // Mustafa Ozata için hesaplar
    SavingsAccount* savingsAccountMustafa = new SavingsAccount(2000.0);
    CheckingAccount* checkingAccountMustafa = new CheckingAccount(1000.0, 1500.0);
    FixedAccount* fixedAccountMustafa = new FixedAccount(10000.0, 0.1, 24);

    cout << "\nMustafa Ozata's account operations" << endl;

    cout << "Enter the amount to deposit in savings account: ";
    cin >> amount;
    savingsAccountMustafa->deposit(amount);

    cout << "Enter the amount to withdraw from checking account: ";
    cin >> amount;
    checkingAccountMustafa->withdraw(amount);

    cout << "Account details:" << endl;
    cout << "Name: Mustafa Ozata" << endl;
    cout << "Type: " << savingsAccountMustafa->getAccountType() << endl;
    cout << "Balance: " << savingsAccountMustafa->getBalance() << endl;

    cout << "Enter the amount to deposit in fixed account: ";
    cin >> amount;
    fixedAccountMustafa->deposit(amount);

    cout << "Account details: " << endl;
    cout << "Name: Mustafa Ozata" << endl;
    cout << "Type: " << fixedAccountMustafa->getAccountType() << endl;
    cout << "Balance: " << fixedAccountMustafa->getBalance() << endl;

    // Furkan Durur için hesaplar
    SavingsAccount* savingsAccountFurkan = new SavingsAccount(3000.0);
    CheckingAccount* checkingAccountFurkan = new CheckingAccount(1500.0, 2000.0);
    FixedAccount* fixedAccountFurkan = new FixedAccount(15000.0, 0.12, 36);

    cout << "\nFurkan Durur's account operations" << endl;

    cout << "Enter the amount to deposit in savings account: ";
    cin >> amount;
    savingsAccountFurkan->deposit(amount);

    cout << "Enter the amount to withdraw from checking account: ";
    cin >> amount;
    checkingAccountFurkan->withdraw(amount);

    cout << "Account details:" << endl;
    cout << "Name: Furkan Durur" << endl;
    cout << "Type: " << savingsAccountFurkan->getAccountType() << endl;
    cout << "Balance: " << savingsAccountFurkan->getBalance() << endl;

    cout << "Enter the amount to deposit in fixed account: ";
    cin >> amount;
    fixedAccountFurkan->deposit(amount);

    cout << "Account details: " << endl;
    cout << "Name: Furkan Durur" << endl;
    cout << "Type: " << fixedAccountFurkan->getAccountType() << endl;
    cout << "Balance: " << fixedAccountFurkan->getBalance() << endl;

    // Belleği temizleme
    delete savingsAccountSerkan;
    delete checkingAccountSerkan;
    delete fixedAccountSerkan;

    delete savingsAccountMustafa;
    delete checkingAccountMustafa;
    delete fixedAccountMustafa;

    delete savingsAccountFurkan;
    delete checkingAccountFurkan;
    delete fixedAccountFurkan;

    return 0;
}
