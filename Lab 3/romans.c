#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int args, char *argc[])
{
    // CODE HERE
    int i = 1;
    while (i <= 100)
    {
        int x = i;
        printf("%d : ", x);
        while (x)
        {
            if (x == 100)
            {
                printf("C");
                x -= 100;
            }

            else if (x >= 90)
            {
                printf("XC");
                x -= 90;
            }
            else if (x >= 50)
            {
                printf("L");
                x -= 50;
            }
            else if (x >= 40)
            {
                printf("XL");
                x -= 40;
            }
            else if (x >= 10)
            {
                printf("X");
                x -= 10;
            }
            else if (x == 9)
            {
                printf("IX");
                x -= 9;
            }
            else if (x >= 5)
            {
                printf("V");
                x -= 5;
            }
            else if (x == 4)
            {
                printf("IV");
                x -= 4;
            }
            else if (x >= 1)
            {
                printf("I");
                x -= 1;
            }
        }
        printf("\n");
        i++;
    }

    return 0;
};