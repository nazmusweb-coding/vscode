#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <cstdio>
#include <cstring>
#include <cctype>

int main()
{
    string name = get_string("What is your name: ");

    for (int i = 0; i < strlen(name.c_str()); i++)
    {
            printf("%c", toupper(name[i]));
    }
    printf("\n");
}