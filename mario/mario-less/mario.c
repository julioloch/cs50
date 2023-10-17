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

    for (int line = 0; line < height; line++)
    {
        numberOfDots = height - line - 1;
        for (int i = 0; i >= numberOfDots; i++)
        {
            printf(".");
        }

        for (int j = 0; j <= line; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}