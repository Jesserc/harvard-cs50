#include <cs50.h>
#include <stdio.h>

// constant variable
const int scoresAmount = 3;

// function prototype for getting average score
float getAverage(int arrayLength, int arrayItem[]);

int main(void)
{
   // array of scores
   int scores[scoresAmount];

   for (int i = 0; i < scoresAmount; i++)
   {
      scores[i] = get_int("Score: ");
   }

   // average score number
   float avgScore = getAverage(scoresAmount, scores);

   printf("Average for scores is: %f \n", avgScore);
}

float getAverage(int arrayLength, int arrayItem[])
{
   int average = 0;
   for (int i = 0; i < arrayLength; i++)
   {
      average += arrayItem[i];
   }

   return average / (float)arrayLength;
}
