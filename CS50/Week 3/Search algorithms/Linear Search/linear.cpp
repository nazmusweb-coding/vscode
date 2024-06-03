#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <cstdio>

bool linear(int size, int array[]);

int main(void)
{
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array)/sizeof(array[0]);
    if (linear(size, array))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

bool linear(int size, int array[])
{
    int target = get_int("Enter : ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return true;
        }
    }
    return false;
}