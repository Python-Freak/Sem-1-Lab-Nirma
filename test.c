#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define SIZE 10
#define MAX_LENGTH 30
#define MAX_LINES 100
#define EOF__ "//\\EOF//\\"

void printStrs(char strs[MAX_LINES][MAX_LENGTH])
{
    int i = 0;
    while (strcmp(strs[i], EOF__))
    {
        printf("%s\n", strs[i++]);
    }
}

void readFile(char name[], char strs[MAX_LINES][MAX_LENGTH])
{
    FILE *ptr = fopen(name, "r");
    int line = 0;
    while (!feof(ptr))
    {
        char k[MAX_LENGTH];
        fgets(k, MAX_LENGTH, ptr);
        if (k[strlen(k) - 1] == '\n')
        {
            k[strlen(k) - 1] = '\0';
        }
        strcpy(strs[line++], k);
    }
    strcpy(strs[line++], EOF__);
}

int isPresent(char str[MAX_LENGTH], char list[MAX_LINES][MAX_LENGTH], int len)
{
    int isPresent = 0;
    for (int k = 0; k < len; k++)
    {
        if (!strcmp(list[k], str))
        {
            isPresent = 1;
            break;
        }
    }
    return isPresent;
}

int isPresent_(char str[MAX_LENGTH], char list[MAX_LINES][MAX_LENGTH])
{
    int isPresent = 0;
    int k = 0;
    while (strcmp(list[k], EOF__))
    {
        if (!strcmp(list[k], str))
        {
            isPresent = 1;
            break;
        }
        k++;
    }
    return isPresent;
}

void union__(char strs1[MAX_LINES][MAX_LENGTH], char strs2[MAX_LINES][MAX_LENGTH],
             char strs3[MAX_LINES][MAX_LENGTH], char input[MAX_LINES][MAX_LENGTH])
{
    int i = 0;
    int j = 0;
    while (strcmp(strs1[i], EOF__))
    {
        strcpy(input[j++], strs1[i++]);
    }
    i = 0;
    while (strcmp(strs2[i], EOF__))
    {

        if (!(isPresent(strs2[i], input, j)))
        {
            strcpy(input[j++], strs2[i++]);
        }
        else
        {
            i++;
        }
    }
    i = 0;
    while (strcmp(strs3[i], EOF__))
    {
        if (!(isPresent(strs3[i], input, j)))
        {
            strcpy(input[j++], strs3[i++]);
        }
        else
        {
            i++;
        }
    }
    strcpy(input[j++], EOF__);
}

void getSol(char strs1[MAX_LINES][MAX_LENGTH], char strs2[MAX_LINES][MAX_LENGTH],
            char strs3[MAX_LINES][MAX_LENGTH], char input[MAX_LINES][MAX_LENGTH])
{
    FILE *out = fopen("output.txt", "w");
    int i = 0;
    while (strcmp(input[i], EOF__))
    {
        char line[2 * MAX_LENGTH] = "";
        strcat(line, input[i]);
        strcat(line, "\t");
        if (isPresent_(input[i], strs1))
        {
            strcat(line, "1\t");
        }
        else
        {
            strcat(line, "0\t");
        }
        if (isPresent_(input[i], strs2))
        {
            strcat(line, "1\t");
        }
        else
        {
            strcat(line, "0\t");
        }
        if (isPresent_(input[i], strs3))
        {
            strcat(line, "1\n");
        }
        else
        {
            strcat(line, "0\n");
        }
        fputs(line, out);
        i++;
    }
}

int main(int args, char *argc[])
{
    char strs1[MAX_LINES][MAX_LENGTH];
    char strs2[MAX_LINES][MAX_LENGTH];
    char strs3[MAX_LINES][MAX_LENGTH];
    readFile("1.txt", strs1);
    readFile("2.txt", strs2);
    readFile("3.txt", strs3);
    char input[MAX_LINES][MAX_LENGTH];
    union__(strs1, strs2, strs3, input);
    getSol(strs1, strs2, strs3, input);
    return 0;
};