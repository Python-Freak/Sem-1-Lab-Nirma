#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void multiply(int m1, int n1, int a[m1][n1], int m2, int n2, int b[m2][n2], int c[m1][n2])
{
    static int i = 0, j = 0, k = 0;
    if (i < m1)
    {
        if (j < n2)
        {
            if (k < m2)
            {
                c[i][j] += a[i][k] * b[k][j];
                k++;
                multiply(m1, n1, a, m2, n2, b, c);
            }
            else
            {
                k = 0;
                j++;
                multiply(m1, n1, a, m2, n2, b, c);
            }
        }
        else
        {
            j = 0;
            i++;
            multiply(m1, n1, a, m2, n2, b, c);
        }
    }
}

int main(int args, char *argc[])
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix_[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int res[3][3] = {0};
    multiply(3, 3, matrix, 3, 3, matrix_, res);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}