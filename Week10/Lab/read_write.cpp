#include <iostream>
#include <iostream>
#include <cctype>
using namespace std;


int main()
{
    string inputfilename = "content.txt";
    string outputfilename = "counts.txt";

    ifstream infile(inputfilename);
    ofstream outfile(outputfilename);

    if (!infile)
    {
        cout << "error: cannot open input fles:" << inputfilename << endl;
        return 1;
    }
    
    int lettercounts[26] = {0}
    char ch;

    while (infile.get(ch))
    {
        if (isalpha(ch))
        {
            ch = toupper(ch);
            int index = ch - 'A';
            lettercounts[index]++;
        }
    }
    for (char c = 'A'; c <= 'Z'; c++)
    {
        outfile << c << ": " << lettercounts[c - 'A'] << endl;
    }
    
    infile.close();
    outfile.close();

    return 0;
}