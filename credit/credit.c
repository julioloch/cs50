#include <cs50.h>
#include <stdio.h>
#include <math.h>

// variables
bool alternateDigit = false;

//prototypes of functions
bool luhn(long creditCard);
int countDigits(long creditCard);

/*
AMEX 15 digits, starts with 34 or 37
MasterCard 16 digits, starts with 51, 52, 53, 54 or 55
Visa 13 and 16 digits, starts with 4
*/

int main(void)
{
    long creditCard = get_long("Number: ");
    while(luhn(creditCard) == true)
    {
        if ((countDigits(creditCard) == 15) && ((creditCard / (long)pow(10,13) == 34) || (creditCard / (long)pow(10,13) == 37))){
            printf("AMEX\n");
        } else if
    }
}

bool luhn(long creditCard){
    int totalSum = 0;

    while(creditCard > 0)
    {
        int lastDigit = creditCard % 10;
        creditCard = creditCard / 10;
        if (alternateDigit == true)
        {
            int aux = lastDigit * 2;
            while (aux > 0) //sums each digit after multiply
            {
                int lastDigitAux = aux % 10;
                aux = aux / 10;
                totalSum += lastDigitAux;
            }
            alternateDigit = !alternateDigit;
        } else if (alternateDigit == false)
        {
            totalSum += lastDigit;
            alternateDigit = !alternateDigit;
        }
    }

    if (totalSum % 10 == 0)
    {
        return true;
    } else {
        return false;
    }
}

int countDigits(long creditCard){
    int totalDigits = 0;
    while(creditCard > 0)
    {
        int lastDigit = creditCard % 10;
        creditCard = creditCard / 10;
        totalDigits++;
    }
    return totalDigits;
}
