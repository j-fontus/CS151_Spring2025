# include <iostream>
using namespace std;

int main()
{
    int duration, hours, minutes;
    cout << " Please enter the duration in minutes";
    cin >> duration;
    hours = duration / 60;
    minutes = duration % 60;
    cout << "The duration is:" << "minutes.\n";
}