#include <iostream>
#include <string>

using namespace std;

void sayHello(string name) {
    if (name.length() == 0) {
        cout << "Hello, World!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}

void countdown(int n) {
    if (n < 0) {
        cout << "Invalid input" << endl;
    } else {
        for (; n >= 0; n--) {
            cout << n << endl;
        }
    }
}

void printBlock(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int j = 0; j < n; j++) {
            for (int m = 0; m < n; m++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

void printTriangle(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {
    sayHello("Josue");
    sayHello("");
    countdown(5);
    printBlock(4);
    printTriangle(5);
    return 0;
}