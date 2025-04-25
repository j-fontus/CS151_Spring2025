#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void sayHello(string = "World");
void allUpper(string &name);
void alllower(string &name);
int getRandom(int max, int min = 0);

int main()
{
 sayHello();
 sayHello("Eve");
 string A = "Heyjoe";
 allUpper(A);
 cout << A << endl;
 alllower(A);
 cout << A << endl;
 cout << getRandom(20) << endl;

    return 0;
}
void sayHello(string name)
{
cout << "Hello, " << name << "!" << endl;
}

void allUpper(string &name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }
    
}
void alllower(string &name)
{
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
     
}
int getRandom(int max, int min)
{
    static bool seeded = false;
    if (seeded == false)
    {
    srand(time(0)); 
    seeded = true;
    }
    if (max < min)
    {
 int temp = min; 
 min = max;
 max = temp;
    }
 return rand()%(max + 1 - min)+ min;

 
}

 
    