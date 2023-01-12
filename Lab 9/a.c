#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void func1(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int elem = arr[i];
        if (elem % 2 == 0)
        {
            arr[i] += 2;
        }
        else
        {
            arr[i] += 1;
        }
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n = 7;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    func1(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
};