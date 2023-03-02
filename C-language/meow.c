#include <cs50.h>
#include <stdio.h>
#include <stdbool.h> // to use booleans un c

int main(void)
{
    int counter = 0;

    /*  while loop */
    while (counter < 3)
    {
        printf("meow...\n");

        counter++;
    }

    /* for loop */
    for (size_t i = 0; i < 3; i++)
    {
        printf("meow again...\n");
    }

    /* loop forever (stop loop with ctrl x or cmd x) */
    while (1)
    {
        printf("meow...\n");
    }
}