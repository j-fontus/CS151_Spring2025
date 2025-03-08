#include <iostream>

using namespace std;

int main()

{
    douple weight, distance, rate, charges;

    cout << "Enter the weight of the package(kg):";
    cin >> weight;

    cout << "Enter the distance it is to be shipped(miles):";
    cin >> distance;

    if (weight <= 0 || weight > 20)
    {
        cout << "invaled weight, Must be between 0 and 20 kg."<< endl;

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

    charges = (distance / 500) * rate;

    cout << "Shipping charges: $" << charges << endl;


    return 0;

}