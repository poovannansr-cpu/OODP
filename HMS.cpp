#include <iostream>
#include <vector>
using namespace std;

// Room Class
class Room {
private:
    int roomNo;
    string type;
    bool isBooked;

public:
    Room(int r, string t) {
        roomNo = r;
        type = t;
        isBooked = false;
    }

    int getRoomNo() { return roomNo; }
    string getType() { return type; }
    bool getStatus() { return isBooked; }

    void bookRoom() { isBooked = true; }
    void vacateRoom() { isBooked = false; }

    void display() {
        cout << "Room No: " << roomNo
             << " | Type: " << type
             << " | Status: " << (isBooked ? "Booked" : "Available") << endl;
    }
};

// Guest Class
class Guest {
private:
    string name;
    int roomNo;

public:
    Guest(string n, int r) {
        name = n;
        roomNo = r;
    }

    void display() {
        cout << "Guest Name: " << name
             << " | Room No: " << roomNo << endl;
    }
};
s
// Hotel Class (Main Controller)
class Hotel {
private:
    vector<Room> rooms;
    vector<Guest> guests;

public:
    Hotel() {
        rooms.push_back(Room(101, "Single"));
        rooms.push_back(Room(102, "Double"));
        rooms.push_back(Room(103, "Deluxe"));
    }

    void showRooms() {
        cout << "\n--- Room Details ---\n";
        for (auto &r : rooms)
            r.display();
    }

    void bookRoom() {
        string name;
        int roomNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Room No: ";
        cin >> roomNo;

        for (auto &r : rooms) {
            if (r.getRoomNo() == roomNo && !r.getStatus()) {
                r.bookRoom();
                guests.push_back(Guest(name, roomNo));
                cout << "Room Booked Successfully!\n";
                return;
            }
        }
        cout << "Room not available!\n";
    }

    void checkout() {
        int roomNo;
        cout << "Enter Room No to Checkout: ";
        cin >> roomNo;

        for (auto &r : rooms) {
            if (r.getRoomNo() == roomNo && r.getStatus()) {
                r.vacateRoom();
                cout << "Checkout Successful!\n";
                return;
            }
        }
        cout << "Invalid Room!\n";
    }
};

// Main Function
int main() {
    Hotel h;
    int choice;

    do {
        cout << "\n--- HOTEL MANAGEMENT SYSTEM ---\n";
        cout << "1. View Rooms\n2. Book Room\n3. Checkout\n4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            h.showRooms();
            break;
        case 2:
            h.bookRoom();
            break;
        case 3:
            h.checkout();
            break;
        case 4:
            cout << "Thank you!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}