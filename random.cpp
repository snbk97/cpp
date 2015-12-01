#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    int i, j;

    // Set the seed
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        j = rand();
        cout << "Random Number : " << j << endl;
    }
    return 0;
}
