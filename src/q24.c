// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.

#include<stdio.h>
int calculatePower(int base, int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    else{
        return base * calculatePower(base, exponent-1);
    }
}
int main()
{
    int base, exponent;
    int result;

    printf("Enter the base:");
    scanf(" %d", &base);

    printf("Enter the exponent:");
    scanf(" %d", &exponent);

    result= calculatePower(base, exponent);

    printf("The result is %d\n",result);

    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
