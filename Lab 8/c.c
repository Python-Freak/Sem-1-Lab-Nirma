#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Complex
{
    float real;
    float img;
} typedef Complex;

void printComplex(Complex *c)
{
    printf("%f + %f i \n", c->real, c->img);
}

Complex *addComplex(Complex *c1, Complex *c2)
{
    Complex *res = (Complex *)malloc(sizeof(Complex));
    res->real = c1->real + c2->real;
    res->img = c1->img + c2->img;
    return res;
}

int main(int args, char *argc[])
{
    // CODE HERE
    Complex *c1 = (Complex *)malloc(sizeof(Complex));
    Complex *c2 = (Complex *)malloc(sizeof(Complex));
    c1->real = 1;
    c1->img = 2;
    c2->real = 2;
    c2->img = 1;
    printComplex(addComplex(c1, c2));
    return 0;
};