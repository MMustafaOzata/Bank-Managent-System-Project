# BankAccount Project

This project simulates banking operations using a BankAccount class. It provides basic functionalities such as depositing, withdrawing, interest calculation, and transaction reporting. The enhanced version applies object-oriented programming principles to support different account types.

## Class Definition

### BankAccount Class

The BankAccount class encapsulates the behavior of a bank account. It includes the following private data members:
- `balance`: Account balance
- `num_transactions`: Number of transactions
- `interest_rate`: Interest rate

### Constructors

The constructor initializes the account with an optional initial balance and an interest rate, defaulting to `0.05`.

### Methods

- `deposit(double amount)`: Adds funds to the balance and increments the transaction count.
- `withdraw(double amount)`: Deducts funds from the balance if there are sufficient funds and increments the transaction count.
- `calculate_interest()`: Computes and adds interest to the balance.
- `report_balance()`: Prints the current balance.
- `report_transactions()`: Prints the number of transactions.

## Main Functionality

The main function provides a simple menu-driven interface for users to interact with the BankAccount class, allowing them to deposit, withdraw, calculate interest, and check the balance and transaction count.

## Strengths and Limitations

### Strengths:
- **Encapsulation**: The class properly encapsulates its data members.
- **Basic Functionality**: Provides essential banking operations such as deposit, withdrawal, and balance reporting.
- **Readability**: The code is straightforward and easy to understand.

### Limitations:
- **User Input Handling**: Basic validation on deposits and withdrawals, but does not handle invalid input (non-numeric values).
- **Lack of Multiple Accounts**: Supports only a single bank account.
- **Limited Functionality**: Does not support advanced features like transaction history or account holder information.

## Enhanced Code Analysis

The enhanced code introduces a more sophisticated design to address the limitations of the initial implementation. It utilizes object-oriented principles such as inheritance and polymorphism to support multiple types of accounts.

### Structure and Improvements

- **Abstraction and Polymorphism**: Supports different types of accounts through inheritance and polymorphism, allowing for more flexible and extensible code.
- **Separation of Concerns**: Each account type is encapsulated within its own class, promoting modularity and ease of maintenance.
- **Improved Flexibility**: The design enables easy addition of new account types without modifying existing code.

### New Account Types:
- `CheckingAccount`
- `SavingsAccount`
- `FixedAccount`
- `Account`: An abstract base class defining common interface methods for all account types.

### Limitations:
- **Minimal Input Validation**: Input validation is basic and may not cover all potential edge cases.
- **Lack of Error Handling**: The code does not include comprehensive error handling mechanisms to deal with exceptional cases such as invalid withdrawal amounts or negative balances.

## Installation

To clone and run this project on your local machine, follow these steps:

### 1. Clone the Repository

First, clone this project from GitHub. Open your terminal or command prompt and run the following command:

```bash
git clone https://github.com/username/projectname.git


