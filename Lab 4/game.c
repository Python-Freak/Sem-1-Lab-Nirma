#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void game(int chances)
{
    srand(0);
    int num = random() % 10;
    int hasWon = 0;
    int i = 0;

    while (!hasWon && i < chances)
    {
        int guess;
        printf("Guess : ");
        scanf("%d", &guess);
        printf("\n");
        if (guess == num)
        {
            printf("Correct \n");
            hasWon = 1;
        }
        else if (guess > num)
        {
            printf("Smaller \n");
        }
        else
        {
            printf("Greater \n");
        }

        i++;
    }
    if (!hasWon)
    {
        printf("Sorry\n");
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    game(3);
    return 0;
};