#include<iostream>

using namespace std;

class Box{
    public:
        double l;
        double b;
        double h;

        double getVolume(void);
        void setLength(double len);
        void setBreadth(double breadth);
        void setHeight(double height);
};

double Box::getVolume(void){
    return l*b*h;
}
void Box::setLength(double len){
    l = len;
}
void Box::setBreadth(double breadth){
    b = breadth;
}
void Box::setHeight(double height){
    h = height;
}

int main(){
    Box box;
    box.setLength(10);
    box.setBreadth(8);
    box.setHeight(5);

    double vol = box.getVolume();
    cout << "The volume of the box is : " << vol << endl;

    return 0;
}
