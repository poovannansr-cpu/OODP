#include <iostream>
using namespace std;

class Product {
public:
    float price;

    Product(float p) {
        price = p;
    }
    Product(const Product &obj) {
        price = obj.price;
        cout << "Product copied successfully\n";
    }

    void show() {
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(1500);
    Product p2 = p1;   

    p1.show();
    p2.show();
}