#include <iostream>

using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);               // This is a constructor
        ~Line();

    private:
        double length;

};

// Member functions definitions including constructor
Line::Line(double len){
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

Line::~Line(void){
    cout << "The object is being deleted." << endl;
}

void Line::setLength(double len){
    length = len;
}

double Line::getLength(void){
    return length;
}

int main(){
    Line line(10.0);

    // get initially set length
    cout << "Length of the line : " << line.getLength() << endl;
    // set line length again
    line.setLength(6.0);
    cout << "Length of the line : " << line.getLength() << endl;

    return 0;
}
