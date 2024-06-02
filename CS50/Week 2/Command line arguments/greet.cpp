#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <stdio.h>

int main(void)  // This void means this program takes no command line arguments 
{
    string name = get_string("What is your name? ");
    printf("Hello, %s\n", name.c_str());
}