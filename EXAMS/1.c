#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int checkSubMAtrix(int matrix[][6], int i1, int j1, int i2, int j2)
{
    if ((i2 - i1) != (j2 - j1))
    {
        return 0;
    }
    int ret = 1;
    for (int i = i1; i <= i2; i++)
    {
        for (int j = j1; j <= j2; j++)
        {
            if (i < 5 && j < 6)
            {

                if (matrix[i][j] != 1)
                {
                    ret = 0;
                    break;
                }
            }
            else
            {
                ret = 0;
                break;
            }
        }
    }
    return ret;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int matrix[5][6] = {{0, 0, 1, 1, 1, 0},
                        {1, 0, 1, 1, 1, 0},
                        {0, 1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1, 0},
                        {1, 1, 0, 0, 0, 0}};
    int isOne = 0;
    int N = -1;
    for (int i1 = 0; i1 < 5; i1++)
    {
        for (int j1 = 0; j1 < 6; j1++)
        {
            if (matrix[i1][j1] == 1)
            {
                isOne++;
                if (N == -1)
                {
                    N == 1;
                }

                for (; N < 6;)
                {
                    if (checkSubMAtrix(matrix, i1, j1, i1 + N, j1 + N))
                    {
                        N++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    printf("%d", N);
    return 0;
};