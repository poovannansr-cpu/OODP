#include <iostream>
using namespace std;
class Vehicle {
protected:
    string brand;
    int speed;
public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }
};
class Car : public Vehicle {
    int seats;
public:
    Car(string b, int s, int st) : Vehicle(b, s) {
        seats = st;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seats: " << seats << endl;
    }
};
int main() {
    Car c("Toyota", 180, 5);
    c.display();
}