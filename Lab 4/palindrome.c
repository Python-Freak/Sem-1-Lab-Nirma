#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int checkPalindrome(int x)
{
    int copy = x;
    int reverse = 0;
    while (copy)
    {
        reverse = reverse * 10 + copy % 10;
        copy /= 10;
    }
    if (reverse == x)
    {
        return 1;
    }
    return 0;
}

int main(int args, char *argc[])
{
    int num;
    scanf("%d", &num);
    if (checkPalindrome(num))
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is a not palindrome number", num);
    }

    return 0;
};