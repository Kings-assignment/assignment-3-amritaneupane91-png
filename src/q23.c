// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).

#include<stdio.h>
int calculateGCD (int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return calculateGCD(b, a%b);
    }
}
int main()
{
    int a,b,result;

    printf("Enter the first number:");
    scanf(" %d", &a);
    
    printf("Enter the second number:");
    scanf(" %d", &b);

    result=calculateGCD(a,b);

    printf("The GCD of %d and %d is %d",a,b,result);

    return 0;
}
