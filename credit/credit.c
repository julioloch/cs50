#include <cs50.h>
#include <stdio.h>

int long creditCard = 0;

int main(void)
{
    do{
        creditCard = get_int("Number: ");
    }
    while (creditCard <= 0);
    printf(%int long, creditCard);
}