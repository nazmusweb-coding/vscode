#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <stdio.h>

// now main will take command line arguments
// argv = array of string it will contain all of the characters or words that you type at the prompt.
// argc = argument count, it tracks the length of array of strings that human typed on the prompt
int main(int argc, char* argv[])
{
    printf("Hello, %s\n", argv[1]);
}