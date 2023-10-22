#include <cs50.h>
#include <stdio.h>
#include <math.h>

long int creditCard = 0;
bool alternateNumber = false;
int sum = 0;

int main(void)
{
    do{
        creditCard = get_int("Number: ");
    }
    while (creditCard <= 0);
    printf("number is: %li\n", creditCard);
    printf("%i");
}

int sumEveryOtherDigit(long int creditCard){
    sum = creditCard % 10;

}