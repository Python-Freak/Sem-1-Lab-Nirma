#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int isPrime(int x)
{
    int isPrime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
        }
    }
    return isPrime;
}

int main(int args, char *argc[])
{
    int num;
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
};