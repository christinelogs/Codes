#include <iostream>

using namespace std;

/*Procedure:
1. Start the Program
2. Enter number to be multiplied
3. Print the multiplication table
4. Stop
*/

int main () {
    int num, j, i;
    cout << "Display the multiplication vertically from 1 to 10: " << endl;
    cout << "------------------------------------------" << endl;
    cout << "Input the number multiplicated up to: ";
    cin >> num;
    cout << "Multiplication table from 1 to " << num;
    cout << endl;
    j = 1;
    while ( j <= 10) {
        i=1;
        while ( i <= num ) {
        cout << i << "x" << j << "=" << i * j;
        i++;
        cout << "\t\t";
        }
        j++;
        cout << "\n";
    }
    return 0;
 
}
