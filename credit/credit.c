#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardNumber;
    do
    {
    cardNumber = get_long("Number: ");
    }
    while (!isValid(cardNumber));
    printf("cardNumber: %s\n", cardNumber);
}
