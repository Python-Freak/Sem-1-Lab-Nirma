#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int getLowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (int)(c - 'A');
    }
    return c - 'a';
}

void printArr(int *arr, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\b\b ]\n");
}

int main(int args, char *argc[])
{
    // CODE HERE
    int length;
    printf("Enter length of string : ");
    scanf("%d", &length);
    char string[length];
    printf("String : ");
    scanf("%s", string);
    int *arr = (int *)malloc(26 * sizeof(int));
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        arr[getLowerCase(string[i])]++;
    }
    int isFound = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
        {
            isFound = 1;
            printf("%c was repeated %d times\n", i + 'a', arr[i]);
        }
    }
    if (!isFound)
    {
        printf("Unique\n");
    }

    return 0;
};