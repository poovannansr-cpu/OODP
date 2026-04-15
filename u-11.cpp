#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
        cout << "Amount Deposited: " << amt << endl;
    }

    void withdraw(float amt) {
        if (amt > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amt;
            cout << "Amount Withdrawn: " << amt << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    float amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance Enquiry\n4. Exit\nEnter choice: ";
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
                acc.showBalance();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }
    } while(choice != 4);

    return 0;
}