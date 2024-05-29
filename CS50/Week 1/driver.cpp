#include "mycs50.h"

int main(void)
{
    // Get name of user and print it
    string first_name = get_string("What is your first name?: ");
    string last_name = get_string("What is your last name?: ");
    cout << "My name is " << first_name << " " << last_name << endl;

    // Get value of x and y and compare them
    int x = get_int("What is x?: ");
    int y = get_int("What is y?: ");
    if (x < y)
    {
        cout << "X is smaller than Y" << endl;
    }
    else if (x > y)
    {
        cout << "Y is smaller than X" << endl;
    }
    else
    {
        cout << "X is equal to Y" << endl;
    }

    // Get answer from the user
    char reply = get_char("Do you agree?: ");
    if (reply == 'y' || reply == 'Y')
    {
        cout << "Agreed." << endl;
    }
    else if (reply == 'n' || reply == 'N')
    {
        cout << "Not agreed." << endl;
    }

    return 0;
}