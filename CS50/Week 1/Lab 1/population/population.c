#include <stdio.h>

int get_start(void);
int get_end(int);
int number_of_Years(int, int);

int main(void)
{
    // TODO: Prompt for start size
    int start = get_start();

    // TODO: Prompt for end size
    int end = get_end(start);

    // TODO: Calculate number of years until we reach threshold
    int years = number_of_Years(start, end);

    // TODO: Print number of years
    printf("Years: %d\n", years);
}

int get_start(void)
{
    int size;
    do
    {
        printf("Start size: ");
        scanf("%d", &size);
    } while (size < 9);

    return size;
}

int get_end(int starting_population)
{
    int size;
    do
    {
        printf("End size: ");
        scanf("%d", &size);
    } while (size < starting_population);

    return size;
}

int number_of_Years(int population, int target)
{
    int years = 0;
    // int population = population;
    while (population <= target)
    {
        population += (population / 3) - (population/4);
        years++;
    }
    return years;
}