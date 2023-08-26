#include <iostream>

using namespace std;
/*Procedure:
1. Start the Program
2. Enter name, section, number of subjects for the program
3. Enter the subjects and the grades
4. Compute the total score
5. Print the total score
6. Compute the average
7. Print the average
8. Stop
*/

int main () {
    int score, numsub, sum=0;
    string name, section, sub;

    cout << "Enter Your Name: ";
    getline (cin, name);
    cout << "Enter Your Section: ";
    cin >> section;
    cout << "Enter number of subjects for the program: ";
    cin >> numsub;
    cout << endl;

    for ( int i=1; i<= numsub; i++) {
        cout << "Enter the Subject Name and Score: ";
        cin >> sub >> score;
        sum += score;
    }
    cout << "\nThe Total Score of the " << numsub << " subjects: \t"<< sum;
    cout << "\nThe Average Score of the " << numsub << " subjects: \t" << sum/numsub;
    
    return 0;

    
}
