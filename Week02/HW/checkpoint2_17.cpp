/*
Write a program that stores your name, address, and phone number in three
separate string objects. Display the contents of the string objects on the screen.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Joe Fon";
    string address = "226 Linden Blvd, Brooklyn, NY";
    string phoneNumber = "347-820-2924";

    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;

    return 0;
}
