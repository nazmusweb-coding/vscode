#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{   
    string word[2];

    word[0] = "HI!";
    word[1] = "BYE!";

    // This should be enough to prove that string is a array of chars
    printf("%c%c%c\n", word[0][0], word[0][1], word[0][2]);
    printf("%c%c%c%c\n", word[1][0], word[1][1], word[1][2], word[1][3]);

}