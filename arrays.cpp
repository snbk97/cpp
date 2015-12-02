#include<iostream>
using namespace std;

#include<iomanip>
using std::setw;

int main(){
    int n[10], i;

    for(i = 0; i < 10; i++)
        n[i] = i + 100;

    cout << "Element"<< setw(10) << "Value" << endl;

    for(i = 0;i < 10; i++)
        cout << i << setw(12) << n[i] << endl;

    return 0;
}
