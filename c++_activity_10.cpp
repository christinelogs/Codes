#include <iostream>

using namespace std;
/*Procedure:
1. Start the program
2. Enter 1st Integer
3. Enter 2nd Integer
4. Pick in the option
5. Perform the operation
6. Print result
7. Else exit
8. Stop
*/
int main()
{
    char fav;
    int num1, num2, choice, i;
    cout << " Enter 1st Integer: ";
    cin >> num1;
    cout << " Enter 2nd Integer: ";
    cin >> num2;
    
    cout << "\n Here are the options: ";
    {
        cout << "\n 1 - Addition";
        cout << "\n 2 - Subtraction";
        cout << "\n 3 - Multiplication:";
        cout << "\n 4 - Division";
        cout << "\n 5 - Exit";
        cout << "\n\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Addition of " << num1 << " and " << num2;
            cout << " : " << num1 + num2;
            break;
        case 2:
            cout << "\n Subtraction of " << num1 << " and " << num2;
            cout << " : " << num1 - num2;
            break;
        case 3:
            cout << "\n Multiplication of " << num1 << " and " << num2;
            cout << " : " << num1 * num2;
            break;
        case 4:
            cout << "\n Division of " << num1 << " and " << num2;
            cout << " : " << num1 / num2;
            break;
        case 5: 
            cout << "\n You've successfully exit!";
            exit (0);
        default:
            printf("\n wrong choice");
        }
    } 
}
