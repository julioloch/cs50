#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int sentences = 0;
    int words = 1;

    for (int i = 0, textLenght = strlen(text); i < textLenght; i++)
    {
        if (tolower(text[i]) >= 'a' && tolower(text[i]) <= 'z')
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    double L = ((double) letters / words) * 100;
    double S = ((double) sentences / words) * 100;
    double index = (0.0588 * L) - (0.296 * S) - 15.8;
    int grade = round(index);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
