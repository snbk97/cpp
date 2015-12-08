#include <iostream>

using namespace std;

class Line{
    public:
        int getLength(void);
        Line(int len);                // Simple constructor
        Line(const Line &obj);        // Copy constructor
        ~Line();                      // Destructor

    private:
        int *ptr;
};

Line::Line(int len){
    cout << "Normal constructor allocating ptr" << endl;
    // Allocate memory for the pointer
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj){
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(void){
    cout << "Freeing the memory!" << endl;
    delete ptr;
}

void display(Line obj){
    cout << "Length of line : " << obj.getLength() << endl;
}

int Line::getLength(void){
    return *ptr;
}

int main(){
    Line line1(10);

    Line line2 = line1;       // This also calls copy constructor

    display(line1);
    display(line2);

    return 0;
}
