#include <iostream>
using namespace std;

class Product {
public:
    float price;

    Product(float p) {
        price = p;
    }

    float calculateCost(int qty) {
        return price * qty;
    }

    float calculateCost(int qty, float delivery) {
        return price * qty + delivery;
    }
};

int main() {
    Product p(100);

    cout << "Cost without delivery: " << p.calculateCost(3) << endl;
    cout << "Cost with delivery: " << p.calculateCost(3, 50) << endl;
}