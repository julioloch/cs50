#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("Whats the height? ");
    }

    for (int line = 0; line < height; line++)
    {
        for (int j = line-1; j >= 0; j--)
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