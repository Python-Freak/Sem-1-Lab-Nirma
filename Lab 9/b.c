#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void CyclicRev(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a = 1, b = 2, c = 3;
    CyclicRev(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
};