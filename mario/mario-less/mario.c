#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
        int height = get_int("Whats the height? ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i >= height; i++)
    {
        for (int j = 0; j >= height; j++)
        {
            printf("#");
        }
    }
}