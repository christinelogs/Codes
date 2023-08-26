#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string make;
        string model;
        string color;
        double price;
    public:
        Car (string aMake, string aModel, string aColor, double aPrice){
            make = aMake;
            model = aModel;
            color = aColor;
            price = aPrice;
        }
        
        void displayDetails() {
            cout << "\t\t\tMake: " << make << endl;
            cout << "\t\t\tModel: " << model << endl;
            cout << "\t\t\tColor: " << color << endl;
            cout << "\t\t\tPrice: $" << price << endl;
        }
};

class Rental {
    private:
        string name;
        double days;
    public:
        Rental (string aName, double aDays){
            name = aName;
            days = aDays;
        }
        
        double getTotalCost (double rDays, double rPrice){
            return rPrice * rDays;
        }
        
        void displayDetails (){
            cout << "\t\t\tRenter: " << name << endl;
            cout << "\t\t\tRental Days: "<< days << endl;
        }
};

int main()
{
    string nMake, nModel, nColor, rName;
    double nPrice, nDays;
    cout << "\t\t\t============================================="<< endl;
    cout << "\t\t\t\t\tCar Rental System"<< endl;
    cout << "\t\t\t============================================="<< endl; 
    
    cout << "FILL THE INFORMATION BELOW" << endl;
    cout << "Make: ";
    cin >> nMake;
    cout << "Model: ";
    cin >> nModel;
    cout << "Color: ";
    cin >> nColor;
    cout << "Price: $";
    cin >> nPrice;
    
    cin.ignore();
    
    Car info1 (nMake, nModel, nColor, nPrice);
    
    cout << "\nRENT THE CAR" << endl;
    cout << "Renter Name: ";
    getline(cin, rName);
    cout << "Rental Days: ";
    cin >> nDays;
    
    Rental costumer1(rName, nDays);
    
    cout << "\n\t\t\t-----------------------------------------"<< endl;
    cout << "\t\t\t    DETAILS OF THE RENTAL TRANSACTION"<< endl;
    cout << "\t\t\t-----------------------------------------"<< endl;
    costumer1.displayDetails();
    info1.displayDetails ();
    cout << "\t\t\t-----------------------------------------"<< endl;
    cout << "\t\t\tTotal Price: $"<< costumer1.getTotalCost(nDays, nPrice)<< endl;
    cout << "\t\t\t-----------------------------------------"<< endl;
    
    return 0;
}