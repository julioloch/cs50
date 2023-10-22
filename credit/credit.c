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
        if (alternateDigit == true){
            int lastDigit = creditCard % 10;
            creditCard = creditCard / 10;
            int aux = lastDigit * 2;
            while (aux > 0){
                int lastDigitAux = aux % 10;
                aux = aux / 10;
                lastDigitAux += lastDigitAux;

            }
        }
    }
    return sum;
}