#include <iostream>
using namespace std;

class Product {
public:
    Product() {
        cout << "Product object created\n";
    }

    ~Product() {
        cout << "Product object destroyed\n";
    }
};

int main() {
    Product p;
}