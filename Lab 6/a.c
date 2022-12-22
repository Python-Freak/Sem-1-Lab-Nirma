#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int isPresent(char *string, char c, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (string[i] == c)
        {
            return i;
        }
    }
    return -1;
}

void deleteChar(char *string, char c, int length)
{
    int curlen = length;
    int k = isPresent(string, c, curlen);
    while (k != -1)
    {
        for (int i = k; i < curlen; i++)
        {
            string[i] = string[i + 1];
        }
        k = isPresent(string, c, --curlen);
    }
}

void printString(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", string[i]);
    }
}

int main(int args, char *argc[])
{
    int length;
    printf("Enter length of string : ");
    scanf("%d", &length);
    char string[length];
    char c2d;
    printf("String : ");
    scanf("%s", string);
    printf("Character to delete : ");
    scanf(" %c", &c2d);

    deleteChar(string, c2d, length);
    printString(string, length);

    return 0;
};