#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // an alternative and simpler way to change letter case is to use the `toupper` and `tolower` functions in the `ctype.h` library
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}