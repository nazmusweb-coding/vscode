#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    string input;
    getline(cin, input);
    sort(input.begin(), input.end());
    cout << "After sorting: " << input << endl;
}