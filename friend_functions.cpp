#include<iostream>

using namespace std;

class Box{
    double width;
    public:
        friend void printWidth(Box box);
        void setWidth(double wid);
};

void Box::setWidth(double wid){
    width = wid;
}

// Note : printWidth() is not a member function of any class.
void printWidth(Box box){
    // Because printWidth() is a friend of Box, it can
    // directly access any member of this class

    cout << "Width of box : " << box.width << endl;
}

int main(){
    Box box;

    // Set box width without member function
    box.setWidth(10.0);

    // Use friend function to print the width
    printWidth(box);

    return 0;
}
