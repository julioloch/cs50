#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize = 0;
    int endSize = 0;
    int population = 0;
    int years = 0;
    int born = 0;
    int dead = 0;

    // Prompt for start size
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // Prompt for end size
    do
    {
        endSize = get_int("End Size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    population = startSize;

    while (population < endSize)
    {
        born = population / 3;
        dead = population / 4;
        population = population + born - dead;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}