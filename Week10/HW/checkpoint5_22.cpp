/*
5.22 - Write a short program that uses a for loop to write the numbers 1 through 10 to
       a file.
*/
#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ofstream outFile("numbers.txt"); 

    for (int i = 1; i <= 10; i++) {
        outFile << i << endl; 
    }

    outFile.close();
    return 0;