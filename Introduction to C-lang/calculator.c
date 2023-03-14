#include <cs50.h>
#include <stdio.h>

int main(void)
{

    /***************************

    ====  Number data-types= ===

    int = 32 bits = 4 billon max
    long = 64 bits
    float = 32 bits for decimals
    double = 64 buts for decimals

    ***************************/

    long x = get_long("x: ");
    long y = get_long("y ");

    // type-casting from long to double
    double z = (double)x / (double)y;
    printf("%.10f\n", z);
}
