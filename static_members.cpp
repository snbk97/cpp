#include<iostream>

using namespace std;

class Box{
    public:
        static int objectCount;
        // Constructor definition
        Box(double l = 2.0, double b = 2.0, double h = 2.0){
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            height = h;
            // Increase every time object is created
            objectCount++;
        }
        double Volume(){
            return length * breadth * height;
        }
        static int getCount(){
            return objectCount;
        }

    private:
        double length;
        double breadth;
        double height;
};

int Box::objectCount = 0;

int main(){
    // Print total number of objects before creating object.
    cout << "Initial stage count : " << Box::getCount() << endl;

    Box box1(3.3, 1.2, 1.5);
    Box box2(8.5, 6.0, 2.0);

    // Print total number of objects after creating the object.
    cout << "Final stage count : " << Box::getCount() << endl;

    return 0;
}
