#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    printf("%d\n", fact(10) / fact(6));
    return 0;
};