#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75 && marks <= 89) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 50 && marks <= 74) {
        cout << "Grade: C" << endl;
    }
    else if (marks < 50) {
        cout << "Fail" << endl;
    }
    else {
        cout << "Invalid marks entered!" << endl;
    }

    return 0;
}