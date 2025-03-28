#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
   srand(time(0));
   int sum = 0;
   const int N = rand()% 16+5;
   int array[N];
   cout << "[";
   for (int i = 0; i < N; i++)
   {
    array[i]=rand()%101;
    
    if (i == N-1){
        cout << array[i];
        
    } else {
        cout << array[i]<< ", " ;
    }
    sum = sum+array[i];
   }
   cout << "]" << endl;
   cout << "sum = "<< sum << endl; 
   cout << "average = " <<setprecision(2) << sum/N << endl;

    return 0;
}