#include <cs50.h>
#include <stdio.h>

/*
 strings are arrays of char (single characters)
and char(s) are also numbers based on ASCII representation
 */

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3); // prints "HI!" as an integer, because its converted in `printf` function. the conversion is based on the ASCII table

    string s = "HI!";
    printf("%i %i %i\n", s[0], s[1], s[2]); // shows that strings are an array of `char`(s), this also prints "HI!" as an integer

    string t = "HI!";
    string u = "BYE!";

    printf("%s\n", t); // prints "HI!"
    printf("%s\n", u); // prints "BYE!"

    char letter1 = 'a' - 32;
    char letter2 = 'A' + 32;
    printf("letter1: %c \n", letter1); // prints 'A'
    printf("letter2: %c \n", letter2); // prints 'a'
}
