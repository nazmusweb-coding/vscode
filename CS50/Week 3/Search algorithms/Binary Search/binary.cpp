#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <cstdio>

bool search(int size, int array[]);

int main(void)
{
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array)/sizeof(array[0]);
    if (search(size, array))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

bool search(int size, int array[])
{
    int target = get_int("Enter : ");
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == target)
        {
            return true;
        }
        else if (target < array[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return false;
}