#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool isEven(int num) {
    return num % 2 == 0;
}


bool isOdd(int num) {
    return num % 2 != 0;
}


string allUpper(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}


string allLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}


int vowelCount(string str) {
    str = allLower(str);
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}


int consonantCount(string str) {
    str = allUpper(str);
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]) && !(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                                   str[i] == 'O' || str[i] == 'U')) {
            count++;
        }
    }
    return count;
}


string encode(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'z') str[i] = 'a';
            else if (str[i] == 'Z') str[i] = 'A';
            else str[i]++;
        }
    }
    return str;
}


int main() {
    int num = 7;
    string text = "Computer";

    cout << "Is " << num << " even? " << (isEven(num) ? "Yes" : "No") << endl;
    cout << "Is " << num << " odd? " << (isOdd(num) ? "Yes" : "No") << endl;

    cout << "Uppercase: " << allUpper(text) << endl;
    cout << "Lowercase: " << allLower(text) << endl;

    cout << "Vowel count: " << vowelCount(text) << endl;
    cout << "Consonant count: " << consonantCount(text) << endl;

    cout << "Encoded text: " << encode(text) << endl;

    return 0;
}