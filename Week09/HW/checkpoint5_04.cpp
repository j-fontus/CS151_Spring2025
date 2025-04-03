/*
Write an input validation loop that asks the user to enter “Yes” or “No”.
*/

#include <iostream>
#include <iostream>

using namespace std,

int main()
{
string answer;

cout << "Enter Yes or No: ";
cin >> answer;

while (answer != "Yes" && answer != "No"){
   cout << " Invalid input. Please enter Yes or No: ";
   cin >> answer;

}

cout << "You entered: " << answer << endl;

return 0;

}