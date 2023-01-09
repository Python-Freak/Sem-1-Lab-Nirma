#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", (char)(65 + j));
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    int i = 1;
    for (int line = 1; line <= n; line++)
    {
        for (int j = 0; j < line; j++)
        {
            printf(i % 2 == 0 ? "0" : "1");
            i++;
        }
        printf("\n");
    }
}

void pattern3(int n)
{
    n = n + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        int max = i;
        int j = 1;
        while (j <= max)
        {
            printf("%d", j);
            j++;
        }
        j -= 2;
        while (j > 0)
        {
            printf("%d", j);
            j--;
        }
        printf("\n");
    }
}

int main(int args, char *argc[])
{

    pattern1(4);
    return 0;
};