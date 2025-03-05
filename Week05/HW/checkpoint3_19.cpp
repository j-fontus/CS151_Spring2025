// The following program skeleton asks for an angle in degrees and converts it to
// radians. The formatting of the final output is left to you.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double degrees, radians;
    cout << "Enter an angle in degrees and I will convert it\n";
    cout << "to radians for you: ";
    cin >> degrees;
    radians = degrees * PI / 180;
    
    cout << left << fixed << showpoint << setprecision(4) << setw(5) << radians << endl;


    return 0;
}