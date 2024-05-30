#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string hello = "Nazmus Sakib";
    cout << "Size of string in bytes    : "  << hello.size()     << endl     // char uses 1 byte per value
         << "Length of string           : "  << hello.length()   << endl     // Return length of string
         << "Maximum size of string     : "  << hello.max_size() << endl     // Return maximum size of string
         << "Capacity of string         : "  << hello.capacity() << endl;    // Return size of allocated storage
    
    hello = "Nazmus Sakib";
    hello.resize(6);                                                    // reduced the size of string
    cout << "Resizing string            : "  << hello  << endl; 
    hello.resize(11, 'X');                                              // increased the size of string by adding some single character at the end;
    cout << "Resizing string            : "  << hello  << endl;
    hello.clear();                                                      // Clears string
    cout << "Clearing String            : "  << hello  << endl;

    string content;
    string line;
    cout << "Please introduce a text. Enter an empty line to finish:\n";
    do {
        getline(cin,line);
        content += line + '\n';
    } while (!line.empty());                                            // Test if string is empty
    cout << "The text you introduced was:\n" << content;

}

/*

    size	        Return length of string (public member function)
    length	        Return length of string (public member function)
    max_size	    Return maximum size of string (public member function)
    resize	        Resize string (public member function)
    capacity	    Return size of allocated storage (public member function)
    reserve	        Request a change in capacity (public member function)
    clear	        Clear string (public member function)
    empty	        Test if string is empty (public member function)
    shrink_to_fit	Shrink to fit (public member function)

*/