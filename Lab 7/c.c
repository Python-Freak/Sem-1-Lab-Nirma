#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    printf("%d\n", fibonacci(44));
    return 0;
};