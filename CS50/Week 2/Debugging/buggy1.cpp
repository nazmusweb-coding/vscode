#include "/workspaces/vscode/CS50/Week 1/mycs50.h"

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    cout << i << endl;
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integers: ");
    } 
    while (n < 0);              // here is the actual breaker, it should be n > 0
    return n;
}


// The preLaunchTask 'C/C++: g++ build active file' terminated with exit code -1.
// Having problem on debugging this one, I guess I will learn this in near future, let keep going for now