#include <stdio.h>
#include <cs50.h>

/* When a program ends, a special exit code is provided to the computer.When a program exits without error, a status code of 0 is provided the computer.
Often, when an error occurs that results in the program ending, a status of 1 is provided by the computer.
You could write a program as follows that illustrates this by typing code status.c and writing code as follows : */

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

// To get the returned exit status, run `echo $?` after running your program