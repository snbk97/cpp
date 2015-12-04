#include<iostream>

using namespace std;

class Box{
public:
    double length;        // Length of the box
    double breadth;       // Breadth of the box
    double height;        // Height of the box
};

int main(){
    Box box1;             // Declare a box1 of type Box
    Box box2;

    // box1 specification
    box1.length = 10.0;
    box1.breadth = 10.0;
    box1.height = 10.0;

    // box2 specification
    box2.length = 1.0;
    box2.breadth = 2.0;
    box2.height = 3;

    double volume1 = box1.length * box1.breadth * box1.height;
    double volume2 = box2.length * box2.breadth * box2.height;

    cout << "Volume of box1 is : " << volume1 << endl;
    cout << "Volume of box2 is : " << volume2 << endl;

    return 0;
}
