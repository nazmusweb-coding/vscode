#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string name = "Nazmus Sakib";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i];                       // operator[], Get character of string
    }
    cout << endl;

    for (int i = 0; i < name.length(); i++)
    {
        cout << name.at(i);                    // at, Get character in string
    }
    cout << endl;

    cout << "Accessed the last element by using back()      : " << name.back()     << endl;        // Access last character

    name.back() = '!';                                                                             // By Accessing the last character, I changed it.
    cout << "Changed the last element by using back()       : " << name            << endl;

    cout << "Accessed the first element by using front()    : " << name.front()    << endl;        // Access first character
    
    name.front() = '@';                                                                            // By Accessing the first character, I changed it.
    cout << "Changed the first element by using front()     : " << name            << endl;
    
}


/*

    operator[]	Get character of string (public member function)
    at	        Get character in string (public member function)
    back	    Access last character   (public member function)
    front	    Access first character  (public member function)

*/