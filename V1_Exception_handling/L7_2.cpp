#include <iostream>
#include <stdexcept>  // for std::runtime_error

using namespace std;

// Custom class for BankAccount
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            throw invalid_argument("Initial balance cannot be negative!");
        }
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Deposit amount must be positive!");
        }
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Insufficient balance!");
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    try {
        BankAccount account(100);  // ✅ valid account

        account.deposit(50);
        cout << "Balance after deposit: " << account.getBalance() << endl;

        account.withdraw(200);  // ❌ will throw exception
        cout << "Balance after withdrawal: " << account.getBalance() << endl;

    } catch (const exception &e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues safely..." << endl;
    return 0;
}
