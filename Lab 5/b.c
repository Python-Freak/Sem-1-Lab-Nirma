#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printArr(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n");
}

int delete (int *arr, int n, int elem)
{
    int found = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] == elem)
        {
            found = 1;
            break;
        }

        i++;
    }
    if (found)
    {
        while (i < n)
        {
            arr[i] = arr[i + 1];
            i++;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int args, char *argc[])
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int elem;
        scanf("%d", &elem);
        arr[i] = elem;
    }
    int elem_to_delete;
    printf("Enter a element to delete : ");
    scanf("%d", &elem_to_delete);
    int i = delete (arr, n, elem_to_delete);
    if (i)
    {
        printArr(arr, n - 1);
    }
    else
    {
        printf("Element not present .");
    }

    return 0;
};