#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int args, char *argc[])
{
    // CODE HERE
    char s1[] = "mihirPatel";
    for (int i = 0; i < strlen(s1) && s1[i + 1] != '\0'; i += 2)
    {
        char t = s1[i];
        s1[i] = s1[i + 1];
        s1[i + 1] = t;
    }
    printf("%s", s1);
    return 0;
};