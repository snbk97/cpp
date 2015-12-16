#include<iostream>

using namespace std;

class Box{
    public:
        double getVolume(void){
            return length * breadth * height;
        }
        void setLength(double l){
            length = l;
        }
        void setBreadth(double b){
            breadth = b;
        }
        void setHeight(double h){
            height = h;
        }

        // Overloaded + operator to add two Box objects.
        Box operator+(const Box &b){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }

    private:
        double length;
        double breadth;
        double height;
};

int main(){
    Box box1, box2, box3;
    double volume= 0.0;

    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);

    volume = box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    volume = box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    box3 = box1 + box2;

    volume = box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}
