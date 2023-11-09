#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string textInput = get_string("Text: ");
    int lettersTotal = 0;
    int wordsTotal = 0;
    int sentencesTotal = 0;
    int textLenght = strlen(textInput);

    while (textInput[] != "\0"){
        for (int i = 0; i < textLenght; i++){
            if (textInput[i] )
                lettersTotal++;

        }
    }
    printf("%s\n", textInput);
}
