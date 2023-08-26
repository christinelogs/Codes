#include <iostream>

using namespace std;
/*Procedure: 
1. Start the program
2. Declare values for the personal information
3. Display given information
4. Print the list of information of the person
5. Stop
*/

int main () {
    string firstName, lastName, address, emailAddress, sex, year, yearLevel, program;
    long long celNumber;
    int section;
    
    cout << "\t\tUSER INFORMATION" <<endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Enter your Information below" << endl << endl;
    cout << "First Name: " ;
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Address: ";
    cin >> address;
    cout << "Email Address: ";
    cin >> emailAddress;
    cout << "Contact Number: " ;
    cin >> celNumber;
    cout << "Sex: ";
    cin >> sex;
    cout << "Year Level: ";
    cin >> year >> yearLevel;
    cout << "Program: ";
    cin >> program;
    cout << "Section: ";
    cin >> section;
    cout << endl << endl;

    cout << "\t\tSTORED INFORMATION" <<endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Current Address: " << address <<endl;
    cout << "Email Address: " << emailAddress << endl;
    cout << "Contact Number: "<< "0"<< celNumber << endl;
    cout << "Sex: " << sex << endl;
    cout << "Program: "<< program << " " << section << " / " << year << " " << yearLevel;
    
    return 0;
}
