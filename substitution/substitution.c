#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int isKeyValid(string key){}

int main(int argc, string argv[])
{
    if (argc = 0){
        printf("Usage: ./substitution key\n");
    } else if (argc > 1){
        printf("Usage: ./substitution key\n");
    } else if (isKeyValid(key) == 0) {
        printf("Key must contain 26 characters.\n");
    } else {
        string key = argv[1];
    }

    printf("%s\n", argv[1]);
    return 0;
}

int isKeyValid(string key){

    return 0;
}
