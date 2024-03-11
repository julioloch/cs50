#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int numberOfDots = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("Whats the height? ");
    }

    numberOfDots = height - 2;

    for (int line = 0; line < height; line++)
    {

        for (int i = 0; i <= numberOfDots; i++)
        {
            printf(" ");
        }
        numberOfDots--;

        for (int j = 0; j <= line; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}