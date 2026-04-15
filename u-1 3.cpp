#include <iostream>
using namespace std;

class Counter {
public:
    static int count;   // shared among all objects
    int id;             // separate for each object

    Counter(int x) {
        id = x;
        count++;
    }

    void display() {
        cout << "ID: " << id << "  Count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1(101), c2(102), c3(103);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}