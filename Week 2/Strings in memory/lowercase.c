#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // by adding `32` to a uppercase letter `char`,
            // which is represented by number in ASCII, we get the lower variant of that letter
            printf("%c", s[i] + 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}