#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Beverage Menu:\n";
    cout << "1: Tea\n";
    cout << "2: Coffee\n";
    cout << "3: Juice\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Tea." << endl;
            break;
        case 2:
            cout << "You selected Coffee." << endl;
            break;
        case 3:
            cout << "You selected Juice." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}