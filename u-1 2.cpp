#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* s = new Student[n];  // FIXED

    float total = 0;

    for(int i=0; i<n; i++) {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
        total += s[i].marks;
    }

    float avg = total / n;
    cout << "\nClass Average: " << avg << endl;

    cout << "Students scoring above average:\n";
    for(int i=0; i<n; i++) {
        if(s[i].marks > avg) {
            cout << s[i].name << " - " << s[i].marks << endl;
        }
    }
z
    delete[] s;  // free memory
    return 0;
}