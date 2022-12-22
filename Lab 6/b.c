#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void swapOddEven(char *string, int n)
{
    int i = 0;
    while (i < n - 1)
    {
        swap(&string[i], &string[i + 1]);
        i += 2;
    }
}

void printString(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

int main(int args, char *argc[])
{
    // CODE HERE
    int length;
    printf("Enter length of string : ");
    scanf("%d", &length);
    char st[length];
    printf("String : ");
    scanf("%s", st);
    swapOddEven(st, length);
    printString(st, length);
    return 0;
};