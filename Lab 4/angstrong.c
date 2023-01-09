#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int isAngstrong(int x)
{
    int copy = x;
    int digits = 0;
    while (copy)
    {
        copy /= 10;
        digits++;
    }

    copy = x;
    int sum = 0;
    while (copy)
    {
        sum += pow(copy % 10, digits);
        copy /= 10;
    }
    if (x == sum)
    {
        return 1;
    }
    return 0;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int num;
    scanf("%d", &num);
    if (isAngstrong(num))
    {
        printf("%d is an Angstrong number \n", num);
    }
    else
    {
        printf("%d is not an Angstrong number \n", num);
    }

    return 0;
};