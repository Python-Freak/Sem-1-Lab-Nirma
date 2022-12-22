#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int args, char *argc[])
{
    // CODE HERE
    int students = 5, subjects = 4;
    int **arr = (int **)malloc(students * sizeof *arr);
    for (int i = 0; i < students; i++)
    {
        arr[i] = (int *)malloc(subjects * sizeof(int));
        printf("Enter marks of student %d in : \n", i + 1);
        for (int j = 0; j < subjects; j++)
        {
            switch (j)
            {
            case 0:
                /* CP */
                printf("\t CP : ");
                break;
            case 1:
                /* CS */
                printf("\t CS : ");
                break;
            case 2:
                /* MATHS */
                printf("\t MATHS : ");
                break;
            case 3:
                /* PHYSICS */
                printf("\t PHYSICS : ");
                break;

            default:
                break;
            }
            int marks;
            scanf("%d", &marks);
            arr[i][j] = marks;
        }
    }

    for (int i = 0; i < students; i++)
    {
        int sum = 0;
        for (int j = 0; j < subjects; j++)
        {
            sum += arr[i][j];
        }

        printf("Total marks obtained by student %d : %d\n", i + 1, sum);
    }

    float avg = 0;
    for (int i = 0; i < students; i++)
    {
        avg += arr[i][0];
    }
    avg /= students;

    printf("The average marks of students in CP : %f", avg);

    return 0;
};