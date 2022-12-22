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

void findIntersection(int *a, int *b, int a_l, int b_l)
{
    int *ans = (int *)malloc((a_l > b_l ? a_l : b_l) * sizeof(int));
    int k = 0;
    for (int i = 0; i < a_l; i++)
    {
        int elem = a[i];
        for (int j = 0; j < b_l; j++)
        {
            if (b[j] == elem)
            {
                ans[k++] = elem;
            }
        }
    }
    printArr(ans, k);
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {1, 3, 5, 8};
    findIntersection(a, b, 6, 4);
    return 0;
};