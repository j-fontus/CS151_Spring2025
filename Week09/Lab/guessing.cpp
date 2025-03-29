#include <iostream>
#include <cstdlip>
#include <cmath> 

using namespace std;

int main()
{
 int guess;
 int randomNumber;
 srand(time(0));
  randonNumber = rand()% 100 + 1;

  cout << " Guess the number (between 1 and 100):";

  do
{
   
  cin >> guess;

  if (guess > randomNumber)
      cout << "Too high, try again: ";
  else if (guess < randomNumber)
      cout << "Too low, try again:";
  
    } while (guess != randomNumber);

    cout << " Congratulation! you guessed the number!"; << endl;

    return 0;

}