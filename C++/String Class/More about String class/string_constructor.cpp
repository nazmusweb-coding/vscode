#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // Way 1
    string name("Nazmus Sakib");                // Argumented constructor

    // Way 2
    string first_name("Nazmus Sakib", 6);       // Takes first 6 characters

    // Way 3
    string new_name(name, 7);                   // copy constructor with beginning position argument

    // Way 4
    string multi(10, 'A');                      // This constructor takes the second argument character, first argument times.


    cout << "From way 1: " << name << endl;
    cout << "From way 2: " << first_name << endl;
    cout << "From way 3: " << new_name << endl;
    cout << "From way 4: " << multi << endl;

}