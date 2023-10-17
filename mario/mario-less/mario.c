#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 5;
    while (height < 1 || height > 8)
    {
        height = get_int("Whats the height? ");
    }
    printf("teste1");


    for (int i = 0; i >= height; i++)
    {
        for (int j = 0; j >= height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("teste2");
}