#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main()

{
    srand(time(0));

    int max = 10000;
    int min = -10000;

    int randomnumber = rand()%(max - min+1) + min;

    if (randomnumber < 0){
        randomnumber = randomnumber * -1;
    
    }
    if (randomnumber % 3 == 0 && randomnumber % 5 == 0){
        cout << "FizzBuzz";

    }

    else if (randomnumber % 3 == 0){
    cout << "Fizz";

   }


    else if (randomnumber % 5 == 0){
    cout << "Buzz";

    }
     
  return 0;

}
