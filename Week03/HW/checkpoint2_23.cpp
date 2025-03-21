// What is wrong with the following program? How would you correct it?

#include <iostream>
using namespace std;

int main()
{
    number = 62.7;         //Using 'number' before it's declared
    double number;
    cout << number << endl;
    return 0;
} 

#include <iostream>
using namespace std;

int main()
{
    double number;           //Declare the variable first
    number = 62.7;             
    cout << number << endl;
    return 0;
}