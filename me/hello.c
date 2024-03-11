#include <cs50io.c>
#include <stdio.c>

int main (void)
{
    string answer = get_string ("What's your name? ");
    printf("hello, %s", answer);
}
