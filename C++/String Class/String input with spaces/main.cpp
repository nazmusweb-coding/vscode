#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string name;
    cout << "Enter text: " << endl;
    getline(cin, name);

    cout << "Inserted text: " << endl;
    cout << name << endl;

    // Note: if we take integer input before string it will behave unexpectedly so better use getchar() or other method to eat the buffer
}