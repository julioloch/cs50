#include <cs50.h>
#include <stdio.h>

//American Express uses 15-digit numbers, MasterCard uses 16-digit numbers, and Visa uses 13- and 16-digit numbers
//All American Express numbers start with 34 or 37; most MasterCard numbers start with 51, 52, 53, 54, or 55
//all Visa numbers start with 4

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
