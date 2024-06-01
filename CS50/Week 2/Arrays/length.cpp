// A problem that is been solved to determine the length of string
#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string name = get_string("What is your name? ");

    int n = 0;
    while(name[n] != '\0')
    {
        n++;
    }
    printf("%d\n", n);  // prints the length

    int m = strlen(name.c_str());
    printf("%d\n", m);
}

// Other programmers had solved this already and made our work easy,
// string.h header file which they recommend as most useful