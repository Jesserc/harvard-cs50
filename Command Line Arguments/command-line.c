#include <stdio.h>

/*
Command-line arguments are those arguments that are passed to your program at the command line.
For example, all those statements you typed after clang are considered command line arguments.
You can use these arguments in your own programs!
 */

int main(int argc, char const *argv[])
{

    /*  Notice that this program knows both argc, the number of command line arguments, and argv which is an array of the characters passed as arguments at the command line.
     */

    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, World\n");
    }
}

/* To run the program after compiling, use:
./command-line ${YOUR_NAME_STRING} */