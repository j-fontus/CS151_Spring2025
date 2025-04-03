/*
Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
*/

#include <iostream>
using namespace std;

int main()

{
    char choice;
    cout << "Enter Y,y,N, or n: ";
    cin >> choice

    while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n'){
        cout << "Invalid. Enter Y, y, N, or n: ";
        cin >> choice

}

cout << "You entered: " << choice << endl;

return 0;


}