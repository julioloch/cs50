#include <cs50.h>
#include <stdio.h>
#include <math.h>

long creditCard = 0;
bool alternateDigit = false;

int main(void)
{
    creditCard = get_long("Number: ");
}

int everyOtherDigit(long creditCard){
    int sum = 0;

    while(creditCard > 0){
        int lastDigit = creditCard % 10;
        creditCard = creditCard / 10;
    }

}