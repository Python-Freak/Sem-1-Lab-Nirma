#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int args, char *argc[])
{
    // CODE HERE
    int n = 5;
    int arr[n][n];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j < n - i - 1)
            {
                arr[i][j] = -1;
            }
            else if (j == n - i - 1)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%4d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
};