#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fact_(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(int args, char *argc[])
{
    // CODE HERE
    printf("%d\n", fact_(10) / fact_(6));
    return 0;
};