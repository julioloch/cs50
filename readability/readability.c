#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int position, letters, words, sentences = 0;

    for (int i = 0, textLenght = strlen(text); i < textLenght; i++){
        if (tolower(textInput[i]) >= 'a' && tolower(textInput[i]) <= 'z'){
            letters++;
        }

        if (textinput[i] == ' '){
            words++
        }
    }

    while (textInput[position] != '\0'){
        position++;
    }

    printf("Text is: %s\n Has %i letters. Total positions: %i\n", text, letters, position);
}
