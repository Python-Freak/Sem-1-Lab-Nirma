#include <stdio.h>
#include <math.h>
int main(int args, char *argc[])
{
    int A, B, C, D;
    printf("Enter A B C in the Equation Ax^2 + Bx + C = 0\n\n");
    int first = 1;

    int done = 0;
    while (!done)
    {
        if (first)
        {
            scanf("%d %d %d", &A, &B, &C);
            first = 0;
        }
        else
        {
            printf("Value of A cant be 0 (Give Input again) \n");
            scanf("%d %d %d", &A, &B, &C);
        }
        if (A != 0)
        {
            done = 1;
            break;
        }
    }
    D = (B * B - 4 * A * C);
    if (D > 0)
    {
        printf("Real and Distinct Roots\n");
        float r1 = (-B + sqrt(D)) / (2 * A);
        float r2 = (-B - sqrt(D)) / (2 * A);
        printf("The roots are : %f , %f \n\n", r1, r2);
    }
    else if (D == 0)
    {
        printf("Real and Equal Roots\n");
        float r1 = (-B + sqrt(D)) / (2 * A);
        float r2 = (-B - sqrt(D)) / (2 * A);
        printf("The roots are : %f , %f \n\n", r1, r2);
    }
    else
    {
        printf("Roots are Imaginary\n");
        float real = -B / (2 * A);
        float imaginary = sqrt(-D) / (2 * A);
        printf("The roots are : %f + %f \bi , %f - %f \bi \n\n", real, imaginary, real, imaginary);
    }
    return 0;
}