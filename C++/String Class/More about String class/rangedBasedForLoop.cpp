#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string input;
    getline(cin, input);
    for (char a : input)
    {
        cout << a << endl;
    }
}