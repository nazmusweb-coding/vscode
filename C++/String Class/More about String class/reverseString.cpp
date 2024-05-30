// Reverse a string using stringstream in recursive way;
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void print(stringstream&);

int main(void)
{
    string input;
    getline(cin, input);
    stringstream ss(input);
    print(ss);
}

void print(stringstream& ss)
{
    string s;
    if (ss >> s)
    {
        print(ss);              // Recursion gets the last words first.
        cout << s << endl;
    }
}