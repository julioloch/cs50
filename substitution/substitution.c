#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int isKeyValid(string key){}

int main(int argc, string argv[])
{
    if (argc = 0 || argc > 1){
        printf("Usage: ./substitution key\n");
        return 1;
    } else if (isKeyValid(key) == 0) {
        printf("Key must contain 26 characters.\n");
        return 2;
    } else {
        string key = argv[1];
    }

    printf("%s\n", argv[1]);
    return 0;
}

int isKeyValid(string key){
    /* Checks if a key is valid. Return 1 if valid, 0 if invalid.

    Key is valid by:
    not containing 26 characters
    containing any character that is not an alphabetic character
    not containing each letter exactly once */

    if (strlen(key) > 26 || strlen(key) < 26){
        //Check size
        return 0;
    } else {
        //Check if is alphabetic
        for (int i = 0, int keyLen = strlen(key); i <= keyLen; i++)
        {
            if (isalpha(key[i]) == 0){
                return 0;
            }
        }
    }
}
