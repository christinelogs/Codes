#include <iostream>
#include <cmath>

using namespace std;
/*Procedure: 
1. Start the program
2. Enter the side of the cube
3. Compute the volume of the cube using the formula V=a3
4. Print the result
5. Stop
*/

int main () {
    int side;

    cout << "Calculate the volume of a cube : " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Input the side of a cube : ";
    cin >> side;

    double volume = pow (side, 3);
    cout << "The volume of a cube is : "<< volume;
    

    return 0;
}
