#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string showTime(int hours, int minutes = 0);

int main()
{
 cout << showTime(0, 0) << endl;
 cout << showTime(12,0) << endl;
 cout << showTime(23, 59) << endl;
 cout << showTime(12,59) << endl;
 cout << showTime(13,30) << endl;
 cout << showTime(14) << endl;
 cout << showTime(15) << endl;

 return 0;
}

string showTime(int hours, int minutes)
{
    string period = (hours < 12) ? "AM" : "PM";

    int displayHour = hours % 12;
    if(displayHour == 0)
       displayHour = 12;

       ostringstream oss;
       oss << setfill('0') << setw(2) << displayHour << ":"
           << setw(2) << minutes << " " << period;

        return oss.str();
}