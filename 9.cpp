#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Convert to lowercase for easy comparison
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert uppercase to lowercase
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }

    return 0;
}