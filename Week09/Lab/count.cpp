#include <iostream>
using namespace std;

int main()
{
    int n;
    int number;
    int positiveCount = 0;
    int negativeCount= 0;

    cout << "enter a positive integer between 10 and 20:";
    cin >> n;

    while (n < 10 || n > 20)
    {
     cout << "Invalid. Please enter a number between 10 and 20:";
     cin >> n;
    }

    for (int i = 1; i <= n; i++)
    {
      cout << "Enter a number #" << i << ": ";
      cin >> number;

      if (number > 0)
          positiveCount++;
      else if (number < 0)
           negativeCount++;
    }

     cout << "Total positive numbers:" << positiveCount << endl;
     cout << "Total negative numbers:" << negativeCount << endl;


    return 0;

}