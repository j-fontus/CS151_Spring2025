/*
5.23 - Write a short program that opens the file created by the program you wrote for
       Checkpoint 5.22, reads all of the numbers from the file, and displays them.
*/

#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ifstream inFile("numbers.txt"); 
    int number;

  
    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

   
    while (inFile >> number) {
        cout << number << endl;
    }

    inFile.close(); 
    return 0;
}