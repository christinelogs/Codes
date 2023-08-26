#include <iostream>

using namespace std;

int main () {
    int grade, equivalent;

    cout << "Enter grade: ";
    cin >> grade;

    if ( grade >= 98 && grade <= 100) {
        cout << "1.00";
    }
    else if ( grade >= 94 && grade <= 97) {
        cout << "1.25";
    }
    else if ( grade >= 88 && grade <= 93) {
        cout << "1.50";
    }
    else if ( grade >= 85 && grade <= 87) {
        cout << "2.00";
    }
    else if ( grade >= 83 && grade <= 84) {
        cout << "2.25";
    }
    else if ( grade >= 80 && grade <= 82) {
        cout << "2.50";
    }
    else if ( grade >= 78 && grade <= 79) {
        cout << "2.75";
    }
    else if ( grade >= 75 && grade <= 77) {
        cout << "2.00";
    }
    else {
        cout << "5.00";
    }
     
    return 0;
}