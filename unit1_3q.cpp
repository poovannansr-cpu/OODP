#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    float balance;

    static int totalAccounts;  // static variable

public:
    // Constructor
    Account(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        totalAccounts++;   // increment when object created
    }

    // Display individual account details
    void display() {
        cout << "Account Number: " << accNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------------" << endl;
    }

    // Static function to display total accounts
    static void showTotalAccounts() {
        cout << "Total Accounts Created: " << totalAccounts << endl;
    }
};

// Initialize static variable
int Account::totalAccounts = 0;

int main() {
    Account a1(101, "Alice", 5000);
    Account a2(102, "Bob", 3000);
    Account a3(103, "Charlie", 7000);

    a1.display();
    a2.display();
    a3.display();

    Account::showTotalAccounts();  // call static function

    return 0;
}