#include <iostream>

using namespace std;

int main () {
    int grade, equivalent;

    cout << "Enter grade: ";
    cin >> grade;

    switch (grade) {
        case 100:
        case 99:
        case 98:
        cout << "1.00";
        break;
        
        case 97:
        case 96:
        case 95:
        case 94:
        cout << "1.25";
        break;
        
        case 93:
        case 92:
        case 91:
        case 90:
        case 89:
        case 88:
        cout << "1.50";
        break;
        
        case 87:
        case 86:
        case 85:
        cout << "2.00";
        break;
        
        case 84:
        case 83:
        cout << "2.25";
        break;
        
        case 82:
        case 81:
        case 80:
        cout << "2.50";
        break;
        
        case 79:
        case 78:
        cout << "2.75";
        break;
        
        case 77:
        case 76:
        case 75:
        cout << "2.00";
        break;
        
        default:
        cout << "5.00";
        break;
    }
    return 0;
}