#include <iostream>
#include <string>

using namespace std;

void sayHello(string name)
{
if (name.length() == 0){
    cout << "Hello World";
}
else {
    cout << "Hello,  " << name;
}


return;
}

void countdown(int n){
    if(n < 0){
    cout << "invalid input";
    }
    else {
        for (n; n >= 0, n--)
        {
            cout << n << endl;
        }
    }
    return;
}
void printBlock(int n){
    if(n < 1){
        cout << "invalid input";
        
    }
    else{
        for(int j = n; j >= 1; j--)
        {
            for(int m = n; m >= 1; m--)
            {
                cout << "*";
            }
            cout << endl;
        }

    }
    
}
void printTriangle(int n){
    if(n < 1){
        cout << "invalid input";
        }
  else{
    for (int i = 0;i < n; i++){
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
  }

}