#include <iostream>
#include <ctime>

using namespace std;

int main(){
    // Current date/time based on current system
    time_t now = time(0);

    // Convert now to string form
    char *time = ctime(&now);

    cout << "The local date and time is : " << time << endl;

    // Convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    time = asctime(gmtm);
    cout << "The UTC date and time is : " << time <<endl;
}
