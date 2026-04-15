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
protected:
    int seats;
public:
    Car(string b, int s, int st) : Vehicle(b, s) {
        seats = st;
    }
};
class ElectricCar : public Car {
    int batteryRange;
public:
    ElectricCar(string b, int s, int st, int range)
        : Car(b, s, st) {
        batteryRange = range;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Seats: " << seats << endl;
        cout << "Battery Range: " << batteryRange << " km" << endl;
    }
};
int main() {
    ElectricCar ec("Tesla", 200, 5, 450);
    ec.display();
}