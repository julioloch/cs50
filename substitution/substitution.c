#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyValid(string key);
string encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    const string key = argv[1];

    if ((argc == 1) || (argc > 2)){
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    if (isKeyValid(key)){
        string plaintext = get_string("plaintext: ");
        string ciphertext = encrypt(plaintext, key);
        printf("%s", ciphertext);
    } else {
        printf("Invalid Key\n");
        return 1;
    }
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

    char keyFreq[26] = {0};

    for (int i = 0; i < 26; i++){
        if (isalpha(key[i]) == 0){ // Check if is alphabetic
            return 0;
        } else {
            keyFreq[tolower(key[i]) - 'a']++; // Counts how many times a letter has been used
        }
    }

    for (int i = 0; i < 26; i++){
        if(keyFreq[i] > 1){ // Checks if a letter has been used twice or more
            printf("Key has two or more identical characters\n");
            return 0;
        }
    }

    return 1;
}

string encrypt(string plaintext, string key){

    string ciphertext = plaintext;


    for (int i = 0; plaintext[i] != '\0'; i++){
        char c = plaintext[i];
        if (isalpha(c)){
            if (islower(c)){
                ciphertext[i] = tolower(key[c - 'a']);
            } else {
                ciphertext[i] = toupper(key[c - 'A']);
            }
        } else {
            ciphertext[i] = plaintext[i];
        }
    }
    return ciphertext;
}

