#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyValid(string key);

int main(int argc, string argv[])
{

    if ((argc == 1) || (argc > 2)){
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    if (strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 2;
    }

    printf("%s\n", argv[1]);
    return 0;
}

int isKeyValid(string key){

    /*
    Checks if a key is valid. Return 1 if valid, 0 if invalid.

    Key is valid by:
    not containing 26 characters
    containing any character that is not an alphabetic character
    not containing each letter exactly once
    */

    //Check if is alphabetic
    for (int i = 0, keyLen = strlen(key); i <= keyLen; i++)
    {
        if (isalpha(key[i]) == 0){
            return 0;
        } else {

        }
    }

    return 1;
}

