#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int minNotes(int N)
{
    int notes = 0;
    while (N != 0)
    {
        if (N >= 100)
        {
            N -= 100;
        }
        else if (N >= 50)
        {
            N -= 50;
        }
        else if (N >= 20)
        {
            N -= 20;
        }
        else if (N >= 10)
        {
            N -= 10;
        }
        else if (N >= 5)
        {
            N -= 5;
        }
        else if (N >= 2)
        {
            N -= 2;
        }
        else
        {
            N -= 1;
        }
        notes++;
    }
    return notes;
}

int main(int args, char *argc[])
{
    // CODE HERE
    printf("%d\n", minNotes(124));
    return 0;
};