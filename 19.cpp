#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose fuel type:\n";
    cout << "1: Petrol\n";
    cout << "2: Diesel\n";
    cout << "3: Electric\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose Petrol." << endl;
            break;
        case 2:
            cout << "You chose Diesel." << endl;
            break;
        case 3:
            cout << "You chose Electric." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
