#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string hello = "Nazmus Sakib";
    for (int i = 0; i < hello.length(); i++)
    {
        cout << hello[i];                       // operator[], Get character of string
    }
    cout << endl;

    for (int i = 0; i < hello.length(); i++)
    {
        cout << hello.at(i);                    // at, Get character in string
    }
    cout << endl;

    cout << "Accessed the last element by using back()      : " << hello.back()     << endl;        // Access last character

    hello.back() = '!';                                                                             // By Accessing the last character, I changed it.
    cout << "Changed the last element by using back()       : " << hello            << endl;

    cout << "Accessed the first element by using front()    : " << hello.front()    << endl;        // Access first character
    
    hello.front() = '@';                                                                            // By Accessing the first character, I changed it.
    cout << "Changed the first element by using front()     : " << hello            << endl;
    
}


/*

    operator[]	Get character of string (public member function)
    at	        Get character in string (public member function)
    back	    Access last character (public member function)
    front	    Access first character (public member function)

*/