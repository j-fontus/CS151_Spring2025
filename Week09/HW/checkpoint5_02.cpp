/*
Write an input validation loop that asks the user to enter a number in the range
of 10 through 25.
*/
#include <iostream>
using namespace std;

int main()
 {
    int number;
    cout << "Enter a number between 10 and 25: ";
    cin >> number;

    while (number < 10 || number > 25) {
        cout << "Invalid. Enter a number between 10 and 25: ";
        cin >> number;
    }

    cout << "You entered: " << number << endl;
    return 0;
}
