#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <cstdio>
#include <cstring>
#include <cctype>

int main()
{
    string name = get_string("What is your name: ");

    // Here the noticable thing is that n is in initialization block which is a great idea to make the code more efficient considering the life time and scope.
    for (int i = 0, n = strlen(name.c_str()); i < n; i++)
    {
            printf("%c", toupper(name[i]));
    }
    printf("\n");
}