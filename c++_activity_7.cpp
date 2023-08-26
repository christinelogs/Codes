#include <iostream>

using namespace std;
/*Procedure: 
1. Start the program
2. Enter single digit number
3. Make a rectangular form of 4 columns and 6 rows
4. Print
5. Stop
*/

int main () {
    int num;

    cout << "Make a rectangular shape by a single digit number :" << endl;
    cout << "--------------------------------------------------------"<< endl;
    cout << "Input the number : ";
    cin >> num;

    cout << num << num << num << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << num << num << num << endl;

    return 0;
}
