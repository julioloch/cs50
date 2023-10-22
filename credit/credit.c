#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do{
        int long creditCard = get_int("Number: ");
    }
    while (creditCard < 0);
    printf(%i, creditCard);
}