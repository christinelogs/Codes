#include <iostream>

using namespace std;
/*Procedure:
1. Start the Program
2. Enter y to continue the program
3. Enter two numbers
4. Compute the sum
5. Print the sum
6. Else enter n to stop the program
7. Stop
*/

int main () {
    int num1, num2;
    char ans;

    cout << "----------This program adds two numbers----------"<< endl;
    cout << "\nWould you like to run this program?(y/n): ";
    cin >> ans;
    do{
        if (ans == 'Y' && ans == 'y' || ans !='N' && ans != 'n') {
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;
            cout << "The sum of Two numbers is: " << num1 + num2 << endl;
        }
        else {
            break;
        }
        cout << "\nWould you like to run this program?(y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << endl << endl;
    cout << "Thank you for using the program! Have a Great Day!";
    
    return 0;
}
