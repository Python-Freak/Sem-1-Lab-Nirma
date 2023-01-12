#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ConCat(char *a, char *b, char *c)
{
    int i = 0;
    int j = 0;
    while (a[i] != '\0')
    {
        c[j++] = a[i++];
    }
    i = 0;
    while (b[i] != '\0')
    {
        c[j++] = b[i++];
    }
    c[j++] = '\0';
}

int main(int args, char *argc[])
{
    // CODE HERE
    char a[20] = "Mihir";
    char b[20] = "Patel";
    char c[40];
    ConCat(a, b, c);
    printf("%s\n", c);
    return 0;
};