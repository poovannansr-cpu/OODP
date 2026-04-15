#include <iostream>
using namespace std;
class Product {
public:
    string name;
    float price;
    Product() {
        name = "Unknown";
        price = 0;
        cout << "Default Product Created\n";
    }
    Product(string n, float p) {
        name = n;
        price = p;
        cout << "Product Created: " << name << endl;
    }
    void display() {
        cout << "Name: " << name << " Price: " << price << endl;
    }
};
int main() {
    Product p1;                 
    Product p2("Laptop", 55000); 
    p1.display();
    p2.display();
}