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
    int sumEveryOtherDigit = luhn(creditCard);
    printf("Total: %i\n", sumEveryOtherDigit);
}

int luhn(long creditCard){
    int totalSum = 0;
    while(creditCard > 0){
        int lastDigit = creditCard % 10;
        creditCard = creditCard / 10;
        if (alternateDigit == true){
            int aux = lastDigit * 2;
            while (aux > 0){ //sums each digit after multiply
                int lastDigitAux = aux % 10;
                aux = aux / 10;
                totalSum += lastDigitAux;
            }
            alternateDigit = !alternateDigit;
        } else if (alternateDigit == false){
            totalSum += lastDigit;
            alternateDigit = !alternateDigit;
        }
    }
    return totalSum;
}