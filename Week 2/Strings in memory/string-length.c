#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for user's name
    string name = get_string("Name: ");

    /* Count number of characters up until '\0'
       (aka NUL, which is always found after the last character of a string in computer memory, it indicates the edn of the string)
   */
    int n = 0;

    // this will get the length of the string, by counting up until the NUL value
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Length of string is: %i\n", n);
}