#include <iostream>
using namespace std;
class Engine {
public:
    void startEngine() {
        cout << "Engine started\n";
    }
};
class GPS {
public:
    void showLocation() {
        cout << "GPS navigation active\n";
    }
};
class SmartCar : public Engine, public GPS {
public:
    void drive() {
        cout << "Smart driving enabled\n";
    }
};
int main() {
    SmartCar sc;
    sc.startEngine();
    sc.showLocation();
    sc.drive();
}