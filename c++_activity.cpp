#include <iostream>
#include <cmath>

using namespace std;

//Create a base class named Shape
class Shape {
    public:
        virtual double getArea () 
        {
           cout << "Area"; 
           return 0;
        }
};

//Create a class named Rectangle that has private data members for its length and width
class Rectangle: public Shape {
    private:
        double length, width;
    public:
        Rectangle (double _length, double _width){
            length = _length;
            width = _width;
        }
        //Get the area of rectangle by multiplying length and width
        double getArea() override
        {
            cout << "Area of Rectangle = ";
            return length*width;
        }
};

//Create a base class named Circle that has private data members for its radius
class Circle: public Shape {
    private:
        double radius;
    public:
        Circle (double _radius){
            radius = _radius;
        }
        //Get the area by multiplying 3.14 by radius squared
        double getArea()override
        {
            double area = 3.14 * pow(radius, 2);
            cout << "Area of Circle = ";
            return area;
        }
        
};

int main () {
    Shape *myShape[2];
    double aLength, aWidth, aRadius;
    int response;
    
    cout <<"=====================================" <<endl;
    cout <<"Computer Programming Lab Exercise #5" <<endl;
    cout <<"=====================================" <<endl <<endl;
    //Get user response
    do {
        cout << "[1] Area of Rectangle\n[2] Area of Circle\n[3] Exit"<<endl;
        cout << "Enter response: ";
        cin >> response;
        
        if (response == 1){
            cout << "\nGETTING THE AREA OF RECTANGLE"<< endl;
            cout << "Enter length: ";
            cin >> aLength;
            cout << "Enter width: ";
            cin >> aWidth;
            Rectangle myRectangle(aLength, aWidth);
            myShape[1] = &myRectangle;
            //Print the area of rectangle
            cout << myShape[1] -> getArea() << endl;
        }
        else if (response == 2){
            cout << "\nGETTING THE AREA OF CIRCLE"<< endl;
            cout << "Enter radius: ";
            cin >> aRadius;
            Circle myCircle(aRadius);
            myShape[0] = &myCircle;
            //Print the area of circle
            cout << myShape[0] -> getArea() << endl;
        }
        else if (response == 3) {
            break;
        }
        else {
            cout << "Invalid Input!"<< endl;
        }
    }while (response != 3);
    
    cout << "Thank you for using the program!"<<endl;
}

//Thanks Sir Dion
/*Results
Area of Circle = 28.26
Area of Rectangle = 2
*/