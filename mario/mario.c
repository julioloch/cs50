#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height = get_int("Height: ");

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
