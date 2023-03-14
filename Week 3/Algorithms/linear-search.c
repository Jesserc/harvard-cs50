#include <stdio.h>

int main(void)
{
    int numbers[20];

    for (int i = 0; i < 100; i++)
    {
        numbers[i] += 2;

        if (numbers[i] == 50)
        {

            printf("i is %i\n", numbers[i]);
        }
    }
}
