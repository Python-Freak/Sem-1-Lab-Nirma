#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct maxReturnType
{
    int max;
    int index;
} typedef maxReturnType;

void printArr(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n");
}

void printLongArr(long long *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%lld, ", arr[i]);
    }
    printf("\b\b]\n");
}

void copySquare(int *arr, int n, long long *arrSqr)
{
    for (int i = 0; i < n; i++)
    {
        arrSqr[i] = (long long)arr[i] * arr[i];
    }
}

void reverse(int *arr, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

maxReturnType findMax(int *arr, int n)
{
    int max = INT8_MIN;
    int max_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    maxReturnType res;
    res.max = max;
    res.index = max_index;
    return res;
}

int main(int args, char *argc[])
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int elem;
        scanf("%d", &elem);
        arr[i] = elem;
    }
    long long arrSqr[n];
    copySquare(arr, n, arrSqr);
    printf("Array Of Squares : \n");
    printLongArr(arrSqr, n);
    printf("Reversed array : \n");
    reverse(arr, n);
    printArr(arr, n);
    maxReturnType res = findMax(arr, n);
    printf("Max Element : %d , its index : %d \n", res.max, res.index);
    
    return 0;
};