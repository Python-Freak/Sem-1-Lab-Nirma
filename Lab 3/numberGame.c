#include <stdio.h>

int main(int args, char *argc[])
{
    // CODE HERE
    int ct, t, se, lpw, see;
    printf("Class Test : ");
    scanf("%d", &ct);
    printf("\n");
    printf("Tutorial : ");
    scanf("%d", &t);
    printf("\n");
    printf("Sessional Exam : ");
    scanf("%d", &se);
    printf("\n");
    printf("LPW : ");
    scanf("%d", &lpw);
    printf("\n");
    printf("SEE : ");
    scanf("%d", &see);
    printf("\n");

    float total = 0.12 * ct + 0.12 * t + 0.16 * se + 0.2 * lpw + 0.4 * see;

    if (total >= 91)
    {
        printf("A+ \n");
    }
    else if (total >= 81)
    {
        printf("A \n");
    }
    else if (total >= 71)
    {
        printf("B+ \n");
    }
    else if (total >= 61)
    {
        printf("B \n");
    }
    else if (total >= 51)
    {
        printf("C+ \n");
    }
    else if (total >= 41)
    {
        printf("C \n");
    }
    else
    {
        printf("Fail \n");
    }

    return 0;
};
