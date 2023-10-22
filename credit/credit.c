#include <cs50.h>
#include <stdio.h>
#include <math.h>

// variables
bool alternateDigit = false;

//prototypes of functions
int everyOtherDigit(long creditCard);


int main(void)
{
    long creditCard = get_long("Number: ");
    int sumEveryOtherDigit = everyOtherDigit(creditCard);
}

int everyOtherDigit(long creditCard){
    int sum = 0;
    while(creditCard > 0){
        int lastDigit = creditCard % 10;
        creditCard = creditCard / 10;
        sum += lastDigit*2;
    }
    return sum;
}