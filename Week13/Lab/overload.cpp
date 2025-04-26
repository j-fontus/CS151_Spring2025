#include <iostream>
#include <string>
#include <cmath>
using namespace std;


string add(char, char);
string add(char, int);
double area(double);
double area(double, double);

int main()
{
    )
    cout << add('A', 'B') << endl;

    
    cout << add('*', 5) << endl;

    
    cout << area(3.0) << endl;

    
    cout << area(4.0, 5.0) << endl;

    return 0;
}


string add(char a, char b)
{
    string result = "";
    result += a;
    result += b;
    return result;
}

string add(char ch, int times)
{
    string result = "";
    for (int i = 0; i < times; i++)
    {
        result += ch;
    }
    return result;
}

double area(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

double area(double length, double width)
{
    return length * width;
}