#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    int sentences = 0;
    int words = 1;

    for (int i = 0, textLenght = strlen(text); i < textLenght; i++){
        if (tolower(text[i]) >= 'a' && tolower(text[i]) <= 'z'){
            letters++;
        } else if (text[i] == ' '){
            words++;
        } else if (text[i] == '.' || text[i] == '!' || text[i] == '?'){
            sentences++;
        }
    }

    printf( "Has %i letters.\n"
            "Total words: %i. \n"
            "Total sentences: %i. \n", letters, words, sentences);
}
