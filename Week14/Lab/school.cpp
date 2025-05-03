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

void examCurve(double[], int size)
{
    double highest = grade[0];

    for (int i = 1; i < size; i++)
    {
        if (grade[i] > highest)
        highest = grades[1];
    }

    double curve = 100.0 - highest;

    for (int i = 0; i < size; i++)
    {
        grade[i] += curve;
    }
}

char letterGrade(int grade)
{
   const int num_grades = 5;
   int minScores[num_grades] = {90, 80, 70, 60, 0};
   char letters[num_grades] = {'A', 'B', 'C', 'D', 'F'};

   if (grade < 0 || grade > 100)
       return 'X';

    for (int i = 0; i < num_grades; i++)
    {
        if(grade >= minScores[i])
           return letters[1];
    }

    return 'X';
}
