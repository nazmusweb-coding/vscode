#include "/workspaces/vscode/CS50/Week 1/mycs50.h"
#include <stdio.h>

const int N = 3;

float average(int*);

int main(void)
{
    // This is a bad design to store almost identical things, here comes array.
    // int score1 = 72;
    // int score2 = 73;
    // int socre3 = 33;

    // printf("Average : %f\n", (score1 + score2 + socre3) / 3.0);

    // We can store these scores in a array
    int scores[N];
    
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average : %f\n", average(scores));

}

float average(int *array)
{
    return (array[0] + array[1] + array[2]) / 3.0;
}