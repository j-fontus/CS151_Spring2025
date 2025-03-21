#include <iostream>
using namespace std;

int main()
{
    double weight, distance, rate, charges;

    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

   
    if (weight <= 0 || weight > 20)
    {
        cout << "Invalid weight. Must be more than 0 and no more than 20 kg." << endl;
        return 1;
    }

    cout << "Enter the distance it is to be shipped (miles): ";
    cin >> distance;

    
    if (distance < 10 || distance > 3000)
    {
        cout << "Invalid distance. Must be between 10 and 3000 miles." << endl;
        return 1;
    }

   
    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    
    int segments = distance / 500;
    if (distance > segments * 500)
        segments++;

    charges = rate * segments;

    cout << "Shipping charges: $" << charges << endl;

    return 0;
}