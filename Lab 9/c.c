#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printArr(int *arr, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b ]\n");
}

void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n = 5;
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printArr(arr, n);
    return 0;
};