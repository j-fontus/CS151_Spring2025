#include <iostream>
#include <string>

using namespace std;

int main()
{
   int num1, num2, middle ;
   cin >> num1;
   cin >> num2;
   middle = num1 + (num2-num1)/2;
   cout << "middle = " << middle << endl;

    num1 = 2147483640;
    num2 = 2147483646;

    middle = num1 + (num2 - num1) / 2;
    cout << middle << endl;

    return 0;
}

   
   
   





}
