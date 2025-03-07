/*
Write a program that hold the prices of 10 items in 10 variables.
The program should display each item's price, the subtotal of the sale,
the amount of sales tax, and the total.

Include iomanip and use the setprecision manipulator to format the output
to two decimal places. Allign the output in columns using the setw manipulator.

Items       Prices
item1        $X.XX
item2        $X.XX
item3        $X.XX
item4        $X.XX
item5        $X.XX
item6        $X.XX
item7        $X.XX
item8        $X.XX
item9        $X.XX
item10       $X.XX

Subtotal     $XX.XX
Sales Tax    8.25%
Total        $XX.XX

*/




#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
    double item1 = 1.25;
    double item2 = 2.25;
    double item3 = 3.25;
    double item4 = 4.25;
    double item5 = 5.25;
    double item6 = 6.25;
    double item7 = 7.25;
    double item8 = 8.25;
    double item9 = 9.25;
    double item10 = 10.25;


    double subtotal = item1 + item2 + item3 + item4 + item5 + item6 + item7 + item8 + item9 + item10;

    double saleTax = 8.25; 

    double Total = subtotal + (subtotal / saleTax);

    string name1 = "item1";
    string name2 = "item2";
    string name3 = "item3";
    string name4 = "item4";
    string name5 = "item5";
    string name6 = "item6";
    string name7 = "item7";
    string name8 = "item8";
    string name9 = "item9";
    string name10 = "item10";

    cout << setw(10) << left <<"Items" << setw(15) << fixed <<setprecision(2)<< right<<"Prices" << endl; 


    cout << setw(10) << left <<name1 << setw(10) << fixed <<setprecision(2)<< right<<"$"<< item1 << endl; 
    cout << setw(10) << left <<name2 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item2<< endl;  
    cout << setw(10) << left <<name3 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item3<< endl; 
    cout << setw(10) << left <<name4 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item4<< endl; 
    cout << setw(10) << left <<name5 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item5<< endl; 
    cout << setw(10) << left <<name6 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item6<< endl; 
    cout << setw(10) << left <<name7 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item7<< endl; 
    cout << setw(10) << left <<name8 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item8<< endl; 
    cout << setw(10) << left <<name9 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item9<< endl; 
    cout << setw(10) << left <<name10 << setw(10) << fixed <<setprecision(2)<< right<< "$"<<item10<< endl << endl; 

    cout << setw(10) << left <<"Subtotal" << setw(10) << fixed <<setprecision(2)<< right<<"$"<< subtotal<< endl; 
    cout << setw(10) << left <<"Sales tax" << setw(13) << fixed <<setprecision(2)<< right<< saleTax<< "%"<< endl; 
    cout << setw(10) << left <<"Total" << setw(10) << fixed <<setprecision(2)<< right<<"$"<< Total<< endl;




    // cout << item2;
    // cout << item3;
    // cout << item4;
    // cout << item5;
    // cout << item6;
    // cout << item7;
    // cout << item8;
    // cout << item9;
    // cout << item10;











   
return 0;
}
