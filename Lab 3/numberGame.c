#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(int args, char *argc[])
{
    // CODE HERE
    srand(0);
    int num;
    num = rand() % 100;
    int guess;
    printf("Guess a number : ");
    scanf("%d", &guess);
    if (guess == num)
    {
        printf("\nCorrect\n");
    }
    else
    {
        printf("\nIncorrect\n");
    }

    return 0;
};