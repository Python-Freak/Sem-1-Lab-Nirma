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
    int max = -1, max_index = -1;
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
        empl->total_salary = base - (da / 100.0) * base - (hra / 100.0) * base;
        if (empl->total_salary > max)
        {
            max = empl->total_salary;
            max_index = i;
        }
        el[i] = empl;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The total salary of %s is %f Rs/-\n", el[i]->name, el[i]->total_salary);
    }

    printf("%s has the maximum salary that is %f Rs/-\n", el[max_index]->name, el[max_index]->total_salary);

    return 0;
};