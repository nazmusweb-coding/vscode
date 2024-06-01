#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <cstdio>
#include <cstring>

int main()
{
    string name = get_string("What is your name: ");

    for (int i = 0; i < strlen(name.c_str()); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - 32);
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}