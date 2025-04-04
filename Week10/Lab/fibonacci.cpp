#include <iostream>
using namespace std;

int main()
{
    int jo; 
    int fi; 
    int bo;
    int cc;

    cout << "enter a non negative integer" << endl;
    cin >> jo;
    fi = 0;
    bo = 1;

    for (int i = 2; i <= jo; i++)
    {
      cc = fi + bo;
      cout << cc << endl;
      bo = fi; 
      cc = bo;
      
    }
     cout << cc << endl;

    
    
    return 0;

}