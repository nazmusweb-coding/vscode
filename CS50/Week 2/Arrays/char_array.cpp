#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{   
    // string is a array of characters
    string str = "HI!";

    // an extra byte is used to track the end of the string
    // which is NUL('\0')
    // it is same for every type of arrays, last index is to
    // track end of the array.

    // Practical example:
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%d %d %d\n", c1, c2, c3);
    // Output will be: 72 73 33

    printf("%d %d %d %d\n", str[0], str[1], str[2], str[3]);
    // Output will be: 72 73 33 0
    // so the matter of extra byte is clear now its for NUL (ascii value 0)
    // for example:
    int array[3] = { 72, 73, 33 };
    printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
    // Output will be: 72 73 33 garbage value, last value isn't allocated 
    // but litterally indicates the ending of the array like null in char array according to David

}