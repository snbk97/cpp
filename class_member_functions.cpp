#include<iostream>

using namespace std;

class Box{
    public:
        double l;
        double b;
        double h;

        double getVolume(void){
            return l*b*h;
        }
};

int main(){
    Box box;
    box.l = 10;
    box.b = 8;
    box.h = 5;

    double vol = box.getVolume();
    cout << "The volume of the box is : " << vol << endl;

    return 0;
}
