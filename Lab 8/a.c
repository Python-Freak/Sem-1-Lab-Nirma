#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Employee
{
    char *name;
    int id;
    float basic_salary;
    float DA;
    float HRA;
    float total_salary;
} typedef Employee;

int main(int args, char *argc[])
{
    // CODE HERE
    Employee **el = (Employee **)malloc(3 * sizeof(Employee *));
    int max;
    for (int i = 0; i < 3; i++)
    {
        char *name = (char *)malloc(20 * sizeof(char));
        float base, da, hra, total;
        printf("Enter (name baseSalary DA HRA) : ");
        scanf("%s %f %f %f", name, &base, &da, &hra);
        Employee *empl = (Employee *)malloc(sizeof(Employee));
        empl->name = name;
        empl->basic_salary = base;
        empl->DA = da;
        empl->HRA = hra;
        empl->id = i + 1;
        el[i] = empl;
    }

    return 0;
};