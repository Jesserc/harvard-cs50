#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");
    // strlen is a function from the string.h library that gets the length of a string
    int length = strlen(name);
    printf("Length of string is: %i\n", length);
}