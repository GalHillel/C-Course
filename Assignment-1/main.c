#include <math.h>
#include <stdio.h>
#include "NumClass.h"

int main()
{
    int num1 = 0, num2 = 0;
    scanf("%i %i", &num1, &num2);
    printf("The Armstrong numbers are:");
    for (int i = num1; i <= num2; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %i", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = num1; i <= num2; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %i", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            printf(" %i", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = num1; i <= num2; i++)
    {
        if (isStrong(i))
        {
            printf(" %i", i);
        }
    }

    return 0;
}
