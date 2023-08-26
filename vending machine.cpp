// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>

using namespace std;

class Vend {
    private:
        double credit;
        int stock;
        double price;
    public:
        Vend (double c, int s, double p)
        {
            credit = c;
            stock = s;
            price = p;
        }
        double getCredit ()
        {
            return credit;
        }
        double getStock ()
        {
            return stock;
        }
        double getPrice ()
        {
            return price;
        }
        bool item (int num)
        {
            if (num >=1 && num <=6)
            {
                return true;
            }
            return false;
        }
        void enough (double price)
        {
            if (price <= credit)
            {
                credit -= price;
            }
            else 
            {
                cout << "Insufficient credit!" << endl;
            }
        }
        void change (double amount, double price)
        {
            amount -= price;
            cout << "Change: "<< amount<< endl;
        }

        
   
};



int main() {
    
    double money;
    int choice;
    int stock = 50;
    double c2 = 1.0;
    double water = 0.50;
    double coke = 2.0;
    double chuckie = 0.80;
    double tropicana = 1.25;
    double earn = 0;
    
    cout << "Enter amount: ";
    cin >> money;
    cout << "\n1.C2 = $1\n2.Water = $0.50\n3.Coke = $2\n4.Chuckie = $ 0.80\n5.Tropicana = $ 1.25" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    Vend costum1 (money, stock, choice);
    costum1.item (choice);
    
    if (choice == 1)
    {
        costum1.enough(c2);
        costum1.change(money,c2);
        stock--;
        earn += c2;
        cout << "Item vended successfully!" << endl;
        cout << "Remaining Items: " << stock << endl;
        cout << "Earn: " <<  earn;
    }
    else if (choice == 2)
    {
        costum1.enough(water);
        costum1.change(money,water);
        earn += water;
        cout << "Item vended successfully!" << endl;
        cout << "Remaining Items: " << stock << endl;
        cout << "Earn: " <<  earn;
    }
    else if (choice == 3)
    {
        costum1.enough(coke);
        costum1.change(money,coke);
        stock--;
        earn += coke;
        cout << "Item vended successfully!" << endl;
        cout << "Remaining Items: " << stock << endl;
        cout << "Earn: " <<  earn;
    }
    else if (choice == 4)
    {
        costum1.enough(chuckie);
        costum1.change(money,chuckie);
        stock--;
        earn += chuckie;
        cout << "Item vended successfully!" << endl;
        cout << "Remaining Items: " << stock << endl;
        cout << "Earn: " <<  earn;
    }
    else if (choice == 5)
    {
        costum1.enough(tropicana);
        costum1.change(money,tropicana);
        stock--;
        earn += tropicana;
        cout << "Item vended successfully!" << endl;
        cout << "Remaining Items: " << stock << endl;
        cout << "Earn: " <<  earn;
    }
    
    
    return 0;
    
}