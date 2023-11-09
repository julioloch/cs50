#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string textInput = get_string("Text: ");
    int position = 0;
    int lettersTotal = 0;
    int wordsTotal = 0;
    int sentencesTotal = 0;
    int textLenght = strlen(textInput);

    while (textInput[position] != '\0'){
        for (int i = 0; i < textLenght; i++){
            if (tolower(textInput[i]) > 'a' && tolower(textInput[i]) < 'z'){
                lettersTotal++;
            }
        }
        position++;
    }
    printf("Text is: %s\n Has %i letters.\n", textInput, lettersTotal);
}
