#include <cs50.h>
#include <stdio.h>

long int creditCard = 0;

int main(void)
{
    do{
        creditCard = get_int("Number: ");
    }
    while (creditCard <= 0);
    printf("number is: %li", creditCard);
}