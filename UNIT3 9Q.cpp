#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting...\n";
    }
};
class PetrolCar : public Vehicle {
public:
    void start() {
        cout << "Petrol car starts with ignition\n";
    }
};
class ElectricCar : public Vehicle {
public:
    void start() {
        cout << "Electric car starts with battery\n";
    }
};
int main() {
    Vehicle *v;

    PetrolCar p;
    ElectricCar e;

    v = &p;
    v->start();

    v = &e;
    v->start();
}