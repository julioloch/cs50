#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int position, letters, sentences = 0;
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

    while (textInput[position] != '\0'){
        position++;
    }

    printf("Text is: %s\n Has %i letters. Total positions: %i. Total words: %i\n", text, letters, position, words);
}
