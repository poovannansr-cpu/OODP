#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    float salary;

    void getData() {
        cout << "Enter ID and Salary: ";
        cin >> id >> salary;
    }

    void showData() {
        cout << "ID: " << id << " Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee *ptr = new Employee[n];  // dynamic allocation

    for(int i=0; i<n; i++) {
        (ptr+i)->getData();   // pointer arithmetic
    }

    cout << "\nEmployee Details:\n";
    for(int i=0; i<n; i++) {
        (ptr+i)->showData();
    }

    delete[] ptr;  // free memory
    return 0;
}