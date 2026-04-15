#include <iostream>
using namespace std;

class Product {
public:
    float price;
    Product(float p) {
        price = p;
    }
    Product operator + (Product obj) {
        return Product(price + obj.price);
    }

    void show() {
        cout << "Total Price: " << price << endl;
    }
};
int main() {
    Product p1(1000), p2(1500);

    Product total = p1 + p2;  
    total.show();
}