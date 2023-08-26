#include <iostream>
using namespace std;
/*Procedure
*1. Start the program
*2. Declare variables
*3. User identified number of volunteers
*4. Loop the user identified volunteer name and number of boxes sold until it is equal to number of volunteers
*5. Compute the total number of boxes sold
*6. Display total number of boxes sold
*7. User identified cost per box
*8. Compute the total amount by multiplying number of boxes sold and cost
*9. Display total amount
*10. Compute the average by dividing the total number of box sold and the number of volunteers
*11. Display the average
*12. Stop
*/
int main() {
    //declare
    string name;
    int num;
    int numVol;
    int totalNum = 0;
    double cost;
    double totalAmount;
    int average;

    cout << "\t\t\tVolunteers Information"<< endl<< endl;
    cout << "Enter the number of volunteers: ";
    cin >> numVol;
    //declare name and box sold
    for (int i=0; i <numVol; i++) {
        cout << "Enter the volunteer's name and the number of boxes sold: ";
        cin >> name >> num;
        totalNum += num;
    }
    //display total number of boxes sold
    cout << "\nThe total number of boxes sold: "<< totalNum<< endl;
    //Declare cost of each box
    cout << "\nEnter the cost of one box: ";
    cin >> cost;
    cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<< endl;
    //compute total amount and average
    totalAmount = totalNum*cost;
    average = totalNum/numVol;
    //display
    cout << "The total money made by selling cookies: \t\t\t\t"<<"$"<< totalAmount<< endl;
    cout << "The average number of boxes sold by each volunteer: \t\t\t"<< average;
    
    return 0;
}
