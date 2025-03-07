#include <iostream>

using namespace std;

int main()

{
    int grade;

    cout << "enter a grade ";
    

    cin >> grade;
    if (grade > 100 || grade < 0){
    cout << "wrong";    
    }

    
   else if (90 <= grade && grade <= 100){
    cout << "A" << grade;
    }

   else if (80 <= grade && grade <= 89){
        cout << "B" << grade;
        }

   else if (70 <= grade && grade <= 79){
        cout << "C" << grade;
        } 

   else if (60 <= grade && grade <= 69){
        cout << "D" << grade;
        }  
        
   else if (0 <= grade && grade <= 59){
        cout << "F" << grade;
        }   

    

    return 0;
}