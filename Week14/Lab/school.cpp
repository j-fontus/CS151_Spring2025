#include <iostream>
#include <string>
using namespace std;

void lowestGrade100(double grades[], int size)
{
    double smallest = 100.0;
    int smallestposition;
    for (int i = 0; i < size ;i++) 
    {
        if (grades[i] < smallest)  
        {
            smallest = grades[i];
            smallestposition = i;
        }  
    }
    grades[smallestposition] = 100.0;
    

}

void examCurve()

