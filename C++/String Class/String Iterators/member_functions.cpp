#include <iostream>

using namespace std;

int main(void)
{
    string str = "This is a sentecnce";
    cout << "The value begin pointing at    : " << *str.begin()  << endl;    // dereference
    cout << "The value end pointing at      : " << *str.end()    << endl;    // dereference

    string::iterator it;                                                     // contains pointer
    for (it = str.begin(); it < str.end(); it++)
    {
        cout << *it << endl;        // dereference
    }

}


/*

    begin	Return iterator to beginning    (public member function)
    end	    Return iterator to end          (public member function)

*/