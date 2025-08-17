#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else {
        cout << "The character is not uppercase." << endl;
    }

    return 0;
}