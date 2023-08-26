#include <iostream>

using namespace std;
/*Procedure: 
1. start the program
2. display
3. print
4. stop
*/

int main () {
    int num1= 6;
    int num2= 7;
    double num3 = 3.7;
    double num4 = 8.0;
    int num5 = 15;

    cout << "Display arithmetic operations with mixed data type :" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "3.7 * 8.0 \t= \t" << num3 * num4 << endl;
    cout << "6 * 8.0 \t= \t" << num1 * num4 << endl;
    cout << "6 / 7 \t\t= \t" << num1 / num2 << endl;
    cout << "3.7 / 8.0 \t= \t" << num3 / num4 << endl;
    cout << "6 + 7 \t\t= \t" << num1 + num2 << endl;
    cout << "15 + 8.0 \t= \t" << num5 + num4 << endl;
    cout << "6 + 8.0 \t= \t" << num1 + num4 << endl;
    cout << "6 / 8.0 \t= \t" << num1 / num4 << endl;
    cout << "6 - 7 \t\t= \t" << num1 - num2 << endl;
    cout << "3.7 - 8.0 \t= \t" << num3 - num4 << endl;
    cout << "6 - 8.0 \t= \t" << num1 - num4 << endl;
    cout << "6 * 7 \t\t= \t" << num1 * num2 << endl;

    return 0;
}
