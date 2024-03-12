#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height = get_int("Height: ");
    int spaces = height - 2;

    for (int i = 1; i <= height; i++)
    {
        for (int k = spaces; k >=0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
        spaces--;
    }
}
