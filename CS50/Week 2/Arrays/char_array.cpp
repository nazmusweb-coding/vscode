#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{   
    // string is a array of characters
    string str = "Hi!";

    // an extra byte is used to track the end of the string
    // which is NUL('\0')
    // it is same for every type of arrays
    // example: integer array - s[0]:73, s[1]:72, s[2]:33, s[3]:0
    // s[3] indicates NUL in the integer array

    // Practical example:
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%d %d %d\n", c1, c2, c3);
    // Output will be: 72 73 33

    
}