#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(char *a, char *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main(int args, char *argc[])
{
    // CODE HERE
    char a[20];
    int x = 696;
    sprintf(a, "%d", x);
    int n = strlen(a);
    for (int i = 0; i < (n / 2); i++)
    {
        swap(&a[i], &a[n - i - 1]);
    }
    if (x == atoi(a))
    {
        printf("HAAAAA");
    }

    return 0;
};