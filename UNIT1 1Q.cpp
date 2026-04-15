#include <iostream>
using namespace std;
class Employee {
private:
    int empID;
    string empName;
    float basicSalary;
    float grossSalary;
public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        grossSalary = basicSalary + (0.20 * basicSalary) + (0.10 * basicSalary);
    }
    void display() {
        cout << "\nEmployee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};
int main() {
    Employee e1, e2;  
    cout << "Enter details for Employee 1:\n";
    e1.getData();
    e1.calculateSalary();
    cout << "\nEnter details for Employee 2:\n";
    e2.getData();
    e2.calculateSalary();
    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();
    return 0;
}