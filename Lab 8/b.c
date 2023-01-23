#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Item
{
    char *name;
    int quantity;
    float price;
    float cost;
} typedef Item;

int main(int args, char *argc[])
{
    // CODE HERE
    Item **list = (Item **)malloc(5 * sizeof(Item *));
    int quantity;
    float price, cost;
    for (int i = 0; i < 5; i++)
    {
        char name[20] = "";
        Item *item = (Item *)malloc(sizeof(Item));
        // printf("Enter Item (name quantity price cost) : ");
        scanf("%s %d %f", name, &quantity, &price);
        item->name = name;
        item->quantity = quantity;
        item->price = price;
        item->cost = price * quantity;
        list[i] = item;
    }
    printf("\n\n\n\nName        Quantity            \b\bPrice           Cost\n");
    for (int j = 0; j < 3; j++)
    {
        printf("%5s      %8d      %10f      %4f\n", list[j]->name, list[j]->quantity, list[j]->price, list[j]->cost);
    }
    return 0;
};