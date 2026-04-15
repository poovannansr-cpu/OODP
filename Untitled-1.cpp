#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient Balance\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n";
        }
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    float amount;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Balance Enquiry\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                acc.withdraw(amount);
                break;

            case 3:
                acc.displayBalance();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 4);

    return 0;
}