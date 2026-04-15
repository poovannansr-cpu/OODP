#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    float average = (float)total / n;
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    if (average >= 80) {
        cout << "Grade A\n";
    } else if (average >= 60) {
        cout << "Grade B\n";
    } else if (average >= 40) {
        cout << "Grade C\n";
    } else {
        cout << "Fail\n";
    }
    return 0;
}