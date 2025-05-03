#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


string commas(string amount);
void load(string nums[], int size);

int main()
{
    const int size = 10;
    string nums[size];

    srand(static_cast < unsigned int >(time(0)));

    load(nums, size);

    cout <<"Formatted randon numbers with commas:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;


}
string commas(string amount)
{
    string result = "";
    bool isNegative = false;

    if (amount[0] == '-')
    {
        isNegative = true;
        amount = amount.substr(1);
    }

    int len = amount.length();
    int count = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        result = amount[i] + result;
        count++;
        if (count % 3 == 0 && i != 0)
        {
            result = ',' + result;
        }
    }

    if (isNegative)
    {
        result = '-' + result;
    }

    return result;
}
void load(string nums[], int size)
{
    char digits[] = {'0','1','2','3','4','5','6','7','8','9'};

    for (int i = 0; i < size; i++)
    {
        int value = rand() % 9000 + 1000; // Range: 1000 to 9999
        string num = "";

        // Build string from individual digits
        int temp = value;
        while (temp > 0)
        {
            char digit = digits[temp % 10];
            num = digit + num;
            temp /= 10;
        }

        nums[i] = commas(num);
    }
}